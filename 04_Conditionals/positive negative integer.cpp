// Positive / Negative Integer
#include <iostream>
using namespace std;
int main() {
    int numb;
    cout << "Enter a number: " << endl;
    cin >> numb;
    if (numb >= 0) {
        cout << "The number is Positive";
    }
    else if (numb < 0) {
        cout << "The number is Negative";
    }
    return 0;
}
