#include <iostream>
using namespace std;
int main() {
    int balance;
    cout << "Enter the initial amount: ";
    cin >> balance;

    int deposit;
    cout << "Enter the deposit amount: ";
    cin >> deposit;

    int withdrawal;
    cout << "Enter the withdrawal amount: ";
    cin >> withdrawal;

    balance += deposit;
    cout << "Balance after deposit: " << balance << endl;

    balance -= withdrawal;
    cout << "Balance after withdrawal: " << balance << endl;
    return 0;
}
