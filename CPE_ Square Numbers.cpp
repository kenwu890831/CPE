#include <iostream>
#include <cmath>

using namespace std ;
bool isInteger(float number) {
    return number == floor(number);
}

int main() {
  int a, b ;
  
  while ( cin >> a >> b ) {
    if ( a == 0 && b == 0 )
      break ;
    int temp = sqrt(a) ;
    float cal = sqrt(a) ;
    if ( isInteger(cal))
      temp-= 1 ;
    int result = sqrt(b) ;
    
    cout << result - temp << endl ;
  } // while 
} // main()