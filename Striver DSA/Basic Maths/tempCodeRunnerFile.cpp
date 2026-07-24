void digitExtraction(int n){
    while(n>0){
        int lastDigit = n % 10; // extracts the last digit.
        cout << lastDigit << " ";
        n = n / 10; // drops the last digit.
    }
}