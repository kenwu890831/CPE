#include <iostream>
#include <string>

using namespace std ;

int main() {
  string input ;
  bool first = true ;
  
  while ( getline(cin, input) ) {
    if ( first )
      first = false ;
    else
      cout << endl ;
      
    int count[130] = {0} ;
    for ( int i = 0 ; i < input.length() ; i++ ) {
      int temp = input[i] ;
      count[temp]++ ;
      //cout << temp << " " << count[temp] << endl ;
    } // for
    
    for ( int i = 1 ; i < 1001 ; i++ ) {
      for ( int j = 129 ; j >= 0 ; j-- ) {
        if ( i == count[j] )
          cout << j << " " << count[j] << endl ;
      } 
      
    } // for
  } // while
} // main()