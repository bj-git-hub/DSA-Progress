#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// PART 1: BASIC CLASS DEFINITION AND OBJECTS
// ============================================================================

// Define a simple class
class Car {
private:
    // Private member variables (data encapsulation)
    string brand;
    string color;
    int speed;

public:
    // Constructor - called when object is created
    Car(string b, string c) {
        brand = b;
        color = c;
        speed = 0;
        cout << "Car object created: " << brand << " " << color << endl;
    }

    // Destructor - called when object is destroyed
    ~Car() {
        cout << "Car object destroyed: " << brand << endl;
    }

    // Getter methods (access private data)
    string getBrand() {
        return brand;
    }

    string getColor() {
        return color;
    }

    int getSpeed() {
        return speed;
    }

    // Setter methods (modify private data safely)
    void setSpeed(int s) {
        if (s >= 0) {
            speed = s;
        }
    }

    // Member function
    void accelerate(int amount) {
        speed += amount;
        cout << brand << " accelerated. Current speed: " << speed << " km/h" << endl;
    }

    void brake() {
        if (speed > 0) {
            speed -= 10;
        }
        cout << brand << " braked. Current speed: " << speed << " km/h" << endl;
    }

    // Display information
    void displayInfo() {
        cout << "Brand: " << brand << ", Color: " << color << ", Speed: " << speed << " km/h" << endl;
    }
};

// ============================================================================
// PART 2: CONSTRUCTOR OVERLOADING
// ============================================================================

class Student {
private:
    string name;
    int rollNo;
    float gpa;

public:
    // Default constructor (no parameters)
    Student() {
        name = "Unknown";
        rollNo = 0;
        gpa = 0.0;
    }

    // Constructor with one parameter
    Student(string n) {
        name = n;
        rollNo = 0;
        gpa = 0.0;
    }

    // Constructor with multiple parameters
    Student(string n, int r, float g) {
        name = n;
        rollNo = r;
        gpa = g;
    }

    // Display student info
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", GPA: " << gpa << endl;
    }
};

// ============================================================================
// PART 3: ACCESS MODIFIERS (Public, Private, Protected)
// ============================================================================

class BankAccount {
private:
    // Private - can only be accessed inside this class
    double balance;
    string accountNumber;

public:
    // Public - can be accessed from outside
    BankAccount(string accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << ". New balance: $" << balance << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    // Public getter for balance
    double getBalance() {
        return balance;
    }
};

// ============================================================================
// PART 4: STATIC MEMBERS (Shared across all objects)
// ============================================================================

class Employee {
private:
    string name;
    int employeeID;
    static int totalEmployees;  // Shared among all objects

public:
    Employee(string n) {
        name = n;
        employeeID = ++totalEmployees;  // Increment static counter
    }

    void display() {
        cout << "Name: " << name << ", ID: " << employeeID << endl;
    }

    static void showTotalEmployees() {
        cout << "Total employees: " << totalEmployees << endl;
    }
};

// Initialize static member (must be done outside the class)
int Employee::totalEmployees = 0;

// ============================================================================
// PART 5: INHERITANCE (Creating subclasses)
// ============================================================================

// Base class (Parent class)
class Animal {
protected:  // Can be accessed by derived classes
    string name;
    string type;

public:
    Animal(string n, string t) {
        name = n;
        type = t;
    }

    virtual void sound() {  // virtual allows overriding in derived classes
        cout << name << " makes a sound." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};

// Derived class (Child class) - inherits from Animal
class Dog : public Animal {
public:
    Dog(string n) : Animal(n, "Dog") {}  // Constructor delegation

    // Override the sound() method
    void sound() override {
        cout << name << " barks: Woof! Woof!" << endl;
    }

    void fetch() {
        cout << name << " is fetching the ball!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    Cat(string n) : Animal(n, "Cat") {}

    // Override the sound() method
    void sound() override {
        cout << name << " meows: Meow! Meow!" << endl;
    }
};

// ============================================================================
// PART 6: POLYMORPHISM (same function, different behavior)
// ============================================================================

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle: O" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle: []" << endl;
    }
};

// ============================================================================
// MAIN FUNCTION - EXAMPLES DEMONSTRATING OOP CONCEPTS
// ============================================================================

int main() {
    cout << "========== OOP CONCEPTS LEARNING GUIDE ==========" << endl << endl;

    // --- PART 1: Basic Classes and Objects ---
    cout << "--- PART 1: Basic Classes and Objects ---" << endl;
    Car car1("Toyota", "Red");
    Car car2("Honda", "Blue");

    car1.accelerate(50);
    car1.displayInfo();

    car2.accelerate(30);
    car2.displayInfo();

    cout << endl;

    // --- PART 2: Constructor Overloading ---
    cout << "--- PART 2: Constructor Overloading ---" << endl;
    Student s1;               // Default constructor
    Student s2("John");       // Single parameter constructor
    Student s3("Alice", 101, 3.8);  // Multiple parameters constructor

    s1.display();
    s2.display();
    s3.display();

    cout << endl;

    // --- PART 3: Access Modifiers ---
    cout << "--- PART 3: Access Modifiers (Encapsulation) ---" << endl;
    BankAccount account("12345", 1000);
    account.deposit(500);
    account.withdraw(300);
    cout << "Current Balance: $" << account.getBalance() << endl;

    cout << endl;

    // --- PART 4: Static Members ---
    cout << "--- PART 4: Static Members ---" << endl;
    Employee emp1("Alice");
    Employee emp2("Bob");
    Employee emp3("Charlie");

    emp1.display();
    emp2.display();
    emp3.display();
    Employee::showTotalEmployees();

    cout << endl;

    // --- PART 5: Inheritance ---
    cout << "--- PART 5: Inheritance ---" << endl;
    Dog dog("Buddy");
    Cat cat("Whiskers");

    dog.sound();
    dog.fetch();
    dog.sleep();

    cat.sound();
    cat.sleep();

    cout << endl;

    // --- PART 6: Polymorphism ---
    cout << "--- PART 6: Polymorphism ---" << endl;
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();  // Calls Circle's draw()
    shape2->draw();  // Calls Rectangle's draw()

    delete shape1;
    delete shape2;

    cout << endl;
    cout << "========== End of Learning Guide ==========" << endl;

    return 0;
}

// ============================================================================
// KEY CONCEPTS SUMMARY:
// ============================================================================
/*
1. CLASS: A blueprint for creating objects
   - Defines data (member variables) and behavior (methods)

2. OBJECT: An instance of a class
   - Created using: ClassName objectName(parameters);

3. CONSTRUCTOR: Special method called when object is created
   - Used to initialize member variables
   - Can be overloaded with different parameters

4. DESTRUCTOR: Special method called when object is destroyed
   - Used to free resources
   - Defined with ~ClassName()

5. ENCAPSULATION: Hiding internal details
   - Use private for data protection
   - Use public getters/setters for safe access
   - Benefits: Security, control, flexibility

6. INHERITANCE: Creating new classes from existing ones
   - Base class (parent) → Derived class (child)
   - Syntax: class Child : public Parent {}
   - Child inherits all public/protected members

7. POLYMORPHISM: "Many forms" - same function, different behavior
   - Use virtual functions for method overriding
   - Allows treating different objects uniformly through base class pointers

8. STATIC MEMBERS: Shared among all objects of a class
   - Declared with 'static' keyword
   - Initialized outside the class definition
   - Accessed using ClassName::memberName

9. ACCESS MODIFIERS:
   - public: Accessible from outside the class
   - private: Accessible only inside the class
   - protected: Accessible in derived classes

10. THIS POINTER: Reference to current object
    - Used inside member functions: this->member

*/
