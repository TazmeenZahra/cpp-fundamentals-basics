// Simple Calculator
#include <iostream>
using namespace std;
int main() {
    int numb1;
    int numb2;
    char T;
    cout << "Enter a number: " << endl;
    cout << "Enter a number: " << endl;
    cout << "Enter a number: " << endl;
    cin >> numb1;
    cin >> numb2;
    cin >> T;
    if (T == '+') {
        cout << "The Sum is: " << numb1 + numb2 << endl;
    }
    else if (T == '-') {
        cout << "The Difference is: " << numb1 - numb2 << endl;
    }
    else if (T == '*') {
        cout << "The Product is: " << numb1 * numb2 << endl;
    }
    else if (T == '/') {
        cout << "The Division is: " << numb1 / numb2 << endl;
    }
    return 0;
}
