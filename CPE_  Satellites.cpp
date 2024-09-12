#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <string>

using namespace std ;

int main() {
  double R, S, A ;
  string unit ;
  R = 6440.0 ;
  while ( cin >> S >> A >> unit ) {
    if ( unit == "min" )
      A /= 60.0 ;
    if ( A > 180.0 )
      A = 360.0 - A ;
    double arc = 2.0*M_PI*(R+S)*A/360.0 ;
    double chord = (R+S)*cos((90.0 - A/2.0)/ 180.0 * M_PI) * 2.0;
    cout << fixed << setprecision(6)<< arc << " " << chord << endl ;
  } // while
} // main()