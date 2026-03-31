#include <iostream>
using namespace std;
int main() {
 int A_usd = 100;
 float A_eur = A_usd * 0.85;
 int A_jpy = A_usd * 110;
 
 cout << "Amount in USD: " << A_usd << endl;
 cout << "Amount in EUR: " << A_eur << endl;
 cout << "Amount in JPY: " << A_jpy;
return 0;
}
