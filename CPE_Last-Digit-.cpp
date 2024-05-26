#include <iostream>

using namespace std ;

int mul( int input ) {
  int result = 1 ;
  int muil_tmep = input%10 ;
  for ( int i = 0 ; i < input ; i++ ) {
    result *= muil_tmep ;
    result %= 10 ;
  }
  
  return result ;
}


int cal( int input ) {
  if ( input == 1 ) 
    return 1 ;
  else {
    return cal( input-1 )+ mul( input ) ;
  }
} 
int main() {

  string input = "" ;
  while ( cin >> input ) {
    int input_int = 0 ;
    int length = input.length() ;
    if ( length == 1 && input[0] == '0' )
      break ;
    else {
      if ( length == 1 )
        input_int = input[0] -'0' ;
      else {
        input_int += (input[length-2]-'0')*10 ;
        input_int += input[length-1] -'0' ;
      }
      //cout << input_int << endl ;
      int result = 0 ;
      if ( input_int != 0 )
        result = cal( input_int ) ;
      result %= 10 ;
      cout << result << endl ;
    }

  } // while
}