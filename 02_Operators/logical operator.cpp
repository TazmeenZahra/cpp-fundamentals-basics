//Logical Operators with boolean values
#include <iostream>
using namespace std;
int main() {
    bool okay = true;
    bool no = false;

    cout << "okay AND no: " << (okay && no) << endl;
    cout << "okay OR no: " << (okay || no) << endl;
    cout << "NOT okay: " << (! okay) << endl;
    cout << "NOT no: " << (! no) << endl;
    return 0;
}
