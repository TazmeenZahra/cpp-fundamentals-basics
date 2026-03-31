//Taking different data types as input from user
#include <iostream>
using namespace std;
int main() {
    int digit;
    cout << "Enter a digit: " << endl;
    cin >> digit;
    cout << "You entered digit: " << digit << endl;
    
    float decimal;
    cout << "Enter a decimal: " << endl;
    cin >> decimal;
    cout << "You entered decimal: " << decimal << endl;

    char letter;
    cout << "Enter a character: " << endl;
    cin >> letter;
    cout << "You entered character: " << letter << endl;

    bool t_f;
    cout << "Enter a boolean: " << endl;
    cin >> t_f;
    cout << "You entered boolean: " << t_f << endl;
    return 0;
}
