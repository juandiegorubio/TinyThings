#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "printer.cpp"
using namespace std;

int main()
{
  int n = 9;
  float f = 5.99;
  double d = 559.34523;
  char c = 'k';
  string s = "Carlos";

  vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8};
  vector<float> vf = {3.99, 4.99, 5.99, 6.99};
  vector<double> vd = {43.6523, 234.52346, 234523.45, 345.423452345};
  vector<char> vc = {'q', 'w', 'e', 'r', 't', 'f'};
  vector<string> vs = {"carlos", "maria", "juan", "daniel"};

  Printer p;
  p.print(n); cout << endl;
  p.print(f); cout << endl;
  p.print(d); cout << endl;
  p.print(c); cout << endl;
  p.print(s); cout << endl << endl;

/*
  p.print(vi); cout << endl;
  p.print(vf); cout << endl;
  p.print(vd); cout << endl;
  p.print(vc); cout << endl;
  p.print(vs); cout << endl << endl;
*/
}
