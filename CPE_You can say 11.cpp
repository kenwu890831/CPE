#include <iostream>
#include <cmath>

using namespace std ;

bool cal( string input ) {
  int odd = 0, even = 0, temp ;
  for ( int i = 0 ; i < input.size(); i++ ) {
   temp = input[i] - '0' ;
   if ( i % 2 == 1 )
     odd += temp ;
   else
     even += temp ;
  }
  
  
  temp = abs( odd - even ) ;

  if ( temp % 11 == 0 )
    return true ;
  else
    return false ;
  return true ;
}

int main() {
  string input ;
  while ( cin >> input ) {
    if ( input == "0" )
      break ;
      
    if ( cal( input ) )
      cout << input << " is a multiple of 11." << endl ;
    else
      cout << input << " is not a multiple of 11." << endl ;
  } // while
}
