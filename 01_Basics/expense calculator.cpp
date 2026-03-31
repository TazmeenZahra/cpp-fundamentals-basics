#include <iostream>
using namespace std;
int main() {
 int Rn = 1500;
 int Em_S = 3000;
 int Uty = 400;
 int O_ex = 300;
 int T_ex = Rn + Em_S + Uty + O_ex;
 int RV = 10000;
 int rem_p = RV - T_ex;
 int YS = rem_p * 12;
 
 cout << "Total monthly expenses: $" << T_ex << endl;
 cout << "Remaining profit: $" << rem_p << endl;
 cout << "Yearly savings: $" << YS;
 return 0;
}
