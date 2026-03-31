// Using Ternary Operator
#include <iostream>
using namespace std;
int main() {
    int digit;
    cout << "Enter a digit: " << endl;
    cin >> digit;
    cout << "You entered digit: " << digit << endl;

    string answer = (digit %2 == 0)? "Even" : "Odd";
    cout << "The digit is: " << answer;
    return 0;
}
