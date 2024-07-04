#include <iostream>
#include <string>

using namespace std ;

string cal( string input ) {
  string result ;
  int temp = 0 ;
  for ( int i = 0 ; i < input.size() ; i++ ) {
    int cTemp = input[i] - '0' ;
    temp += cTemp ;
  } // for input size
  
  result = to_string( temp ) ;
  return result ;
} // cal()

int main() {

  
  string input ;
  while ( cin >> input ) {
    if ( input == "0" )
      break ;
      
    while ( input.size() != 1 ) {
      input = cal( input ) ;
    } // main loop
    
    cout << input << endl ;
  } // while input end
} // main()