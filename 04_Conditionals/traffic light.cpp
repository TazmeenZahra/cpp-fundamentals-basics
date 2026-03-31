// Traffic Light Action Guidance
#include <iostream>
using namespace std;
int main() {
    string colour;
    cout << "Enter a colour: " << endl;
    cin >> colour;
    if (colour == "red") {
        cout << "Stop your vehicle";
    }
    else if (colour == "yellow") {
        cout << "Get ready to move";
    }
    else if (colour == "green") {
        cout << "You can go";
    }
    return 0;
}
