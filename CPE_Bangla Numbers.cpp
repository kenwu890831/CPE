#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std ;

void function( long long input ) {
  if ( input/10000000 != 0 ) {
    function( input/10000000) ;
    cout<<" kuti";
    input = input % 10000000 ;
  }
  
  if ( input/100000 != 0 ) {
    function( input/100000) ;
    cout<<" lakh";
    input = input % 100000 ;
  }
  
  if ( input/1000 != 0 ) {
    function( input/1000) ;
    cout<<" hajar";
    input = input % 1000 ;
  }
  
  if ( input/100 != 0 ) {
    function( input/100) ;
    cout<<" shata";
    input = input % 100 ;
  }
  
  if ( input != 0 ) {
    cout << " " << input ;
  }
  
}

int main() {
  long long input ;
  int counter = 1 ;
  
  while ( cin >> input ) {
    cout << setw(4) << counter <<"." ;
    function( input ) ;
    if ( input == 0 )
      cout << " 0" ;
    cout << endl ;
    //cout << input << endl ;
    counter++ ;
  } // while
}