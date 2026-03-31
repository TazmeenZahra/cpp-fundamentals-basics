#include <iostream>
using namespace std;
int main() {
 int ms_bt = 4000;
 float ms_at = ms_bt * (1-0.1);
 int as_bt = ms_bt * 12;
 int as_at = ms_at * 12;
 
 cout << "Monthly Salary: $" << ms_bt <<endl;
 cout << "Monthly Salary after tax: $" << ms_at << endl;
 cout << "Annual Salary before tax: $" << as_bt << endl;
 cout << "Annual Salary after tax: $" << as_at;
 return 0;
}
