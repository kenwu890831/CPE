#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main() {
  vector<string> temp ;
  string input ;
  int max = 0 ;
  while( getline( cin, input ) ) {
    if ( input.length() > max )
      max = input.length() ;
    temp.push_back( input ) ;
    
  } // while input
  
  for ( int i = 0 ; i < max ; i++ ) {
    for ( int j = temp.size() -1 ; j >= 0; j-- ) {
      if ( temp[j].length() > i ) {
        cout << temp[j][i] ;
      }
      else
        cout << " " ;
    }
    
    
    cout << endl ;
  } // for
} // main()