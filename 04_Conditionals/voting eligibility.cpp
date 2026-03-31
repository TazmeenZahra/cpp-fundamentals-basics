// Check Voting Eligibility
#include <iostream>
using namespace std;
int main() {
    int vote;
    cout << "Enter an age: " << endl;
    cin >> vote;
    if (vote >= 18) {
        cout << "The person is Eligible";
    }
    else if (vote < 18) {
        cout << "The person is not Eligible";
    }
    return 0;
}
