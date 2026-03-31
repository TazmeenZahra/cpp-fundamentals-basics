#include <iostream>
using namespace std;
int main() {
 int tmp_C1 = 25;
 int tmp_F = (tmp_C1*9/5)+32;
 float tmp_F1 = 100;
 float tmp_C = (tmp_F1-32)*5/9;
 
 cout << "Temperature in Celsius: " << tmp_C1 << endl;
 cout << "Temperature in Fahrenheit: " << tmp_F << endl;
 cout << "Temperature in Fahrenheit: " << tmp_F1 << endl;
 cout << "Temperature in Celsius: " << tmp_C;
 return 0;
}
