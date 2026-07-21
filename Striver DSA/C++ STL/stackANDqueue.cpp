#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main() {
// ------------STACK---------------
// declaration
stack<int> st;
// push
st.push(10);
st.push(20);
st.push(30);
st.push(40);
// LIFO
cout << st.top() << endl;
// pop
st.pop();
cout << st.top() << endl;
//---------Queue---------------
// declaration
queue<int> q;
// push
q.push(10);
q.push(20);
q.push(30);
q.push(40);
//FIFO
cout << q.front() << endl;
cout << q.back() << endl;
// pop - pops from front
q.pop();
cout << q.back() << endl;
cout << q.front() << endl;
//-------Priority queue - Elements gets stored in an increasing manner.-------
priority_queue<int> pq;

}
