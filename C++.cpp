#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double alpha y, z;
  const double PI= 3,1415926535;

  cout << "Enter number of alpha corner (at deegres)";
  cin >> alpha;

  double rad = alpha * PI/180.0;

  y=cos(rad)+sin(rad)+cos(3 * rad)+sin(3 * rad);

  z=2 * sqrt(2) * cos(rad) * sin(PI/4.0+2 * rad);

  cout << "y=" << y << endl;
  cout << "z=" << z << endl;
  cout << "Difference beetwen y and z: " << abs(y-z) << endl;

  return 0;
}
