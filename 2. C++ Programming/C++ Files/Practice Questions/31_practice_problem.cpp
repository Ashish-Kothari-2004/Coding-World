// Q.4 Raising a number to a power p is the same as multiplying n by itself p times. Write a function called power that takes two arguments, a double value for n and an int value for p, and return the result as double value. Use default argument of 2 for p, so that if this argument is omitted the number will be squared. Write the main function that gets value from the user to test power function.

#include <iostream>
#include <cmath>

using namespace std;

double power(double n, int p = 2) {
    return pow(n, p);
}

int main() {
    double n;
    int p;
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Enter the power (default is 2): ";
    cin >> p;
    
    cout << "Result: " << power(n, p) << endl;
    
    return 0;
}