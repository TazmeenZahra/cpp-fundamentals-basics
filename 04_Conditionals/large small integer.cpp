// Large / Small Integer
#include <iostream>
using namespace std;
int main() {
    int numb1;
    int numb2;
    cout << "Enter a number: " << endl;
    cout << "Enter a number: " << endl;
    cin >> numb1;
    cin >> numb2;
    if (numb1 > numb2) {
        cout << "Number 1 is Larger then Number 2";
    }
    else if (numb1 < numb2) {
        cout << "Number 1 is Smaller then Number 2";
    }
    return 0;
}
