#include <iostream>
#include <string>

using namespace std ;

int degree( int input ) {
  int temp = 0 ;
  while ( input > 0 ) {
    temp += ( input % 10 ) ;
    input /= 10 ;
  } // while
  
  //cout << temp << endl ;
  return temp ;
} // degree()

int main() {
  string N = "" ;
  while ( cin >> N ) {
    if ( N == "0" )
      break ;
    int total = 0 ;
    for ( int i = 0 ; i < N.length() ; i++ ) {
      total += ( N[i] - '0' ) ;
      //cout << N[i] << endl ;
    } //
    
    //cout << total << endl ;
    if ( total % 9 == 0 ) {
      cout << N << " is a multiple of 9 and has 9-degree " ;
      int count = 1 ;
      while ( total / 10 != 0 ) {
        total = degree( total ) ;
        count ++ ;
      } // while
      cout << count << "." << endl ;
    } // if
    else
      cout << N << " is not a multiple of 9." << endl ;
    
  } // while
} // main()