#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n = 0 ;
  while ( cin >> n ) {
    bool prime = true, emirp = true ;
    for ( int i = 2 ; i <= sqrt(n) ; i++ ) {
      //cout << i << " " << n << endl ;
      if ( n % i == 0 ) {
        prime = false ;
        break;
      }
    } // check 1
    
    
    if ( prime ) {
      int temp = n, reverse = 0 ;
      // reverse 
      
      while ( temp > 0 ) {
        reverse *= 10 ;
        reverse += (temp % 10) ;
        temp /= 10 ;
      } // while
      
      //cout << reverse << endl ;
      if ( reverse == n )
        emirp = false ; 
      for ( int i = 2 ; i < sqrt(reverse) ; i++ ) {
        if ( reverse % i == 0 ) {
          emirp = false ;
          break;
        }
      } // check 2
    } // 
    
    
    if ( emirp && prime )
      cout << n << " is emirp." << endl ;
    else if ( prime )
      cout << n << " is prime." << endl ;
    else
      cout << n << " is not prime." << endl ;
  } // while
} // main()