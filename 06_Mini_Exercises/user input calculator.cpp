// Make a calculator of simple operations while taking input from user
#include <iostream>
using namespace std;
int main() {
    int num1;
    cout << "Enter number 1: " << '\n';
    cin >> num1;

    int num2;
    cout << "Enter number 2: " << '\n';
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float division = num1 / num2;
    int modulo = num1 % num2;
    int power_1 = num1 * num1 * num1;
    int power_2 = num2 * num2 * num2;
    
    cout << "Sum of two numbers: " << sum << '\n';
    cout << "Difference of two numbers: " << difference << '\n';
    cout << "Product of two numbers: " << product << '\n';
    cout << "Division of two numbers: " << division << '\n';
    cout << "Modulous of two numbers: " << modulo << '\n';
    cout << "Power of 1st number: " << power_1 << '\n';
    cout << "Power of 2nd number: " << power_2 << '\n';
    return 0;
}
