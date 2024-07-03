#include <iostream>

using namespace std ;

int main() {
  string temp = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./" ;
  char input ;
  while ( cin.get( input ) ) {
      if( temp.find( tolower( input) )!= -1 )
        cout << temp[temp.find( tolower( input) ) -2] ;
      else
        cout << input ;

     
  } // while
} 