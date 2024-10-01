#include <iostream>

using namespace std;
 
int main()
{
  cout << "##  Program C++ Konversi Suhu  ##" << endl;
  cout << "=================================" << endl;
  cout << endl;
 
  float celc, fahr, kelv ;
 
  cout << "Input suhu celsius: ";
  cin >> celc;
  cout << endl;
 
  fahr = (9.0/5.0 * celc) + 32;
  kelv = celc + 273.15;
 
  cout << celc << " derajat Celcius = " << fahr <<" derajat Fahrenheit";
  cout << endl;
  cout << celc << " derajat Celcius = " << kelv <<" derajat Kelvin";
  cout << endl;
 
  return 0;
}

