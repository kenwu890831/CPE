#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
using namespace std ;

int main() {

  int n, max = 0 ;
  cin >> n ;
  //cout << n << endl ;
  string input ;
  getline(cin, input ) ; /// first line \n
  int result[26] ={0} ;
  for ( int i = 0 ; i < n ; i++ ) {
    getline(cin, input ) ;
    for ( int j = 0 ; j < input.size() ; j++ ) {
      if ( ( input[j] >= 'A' && input[j] <= 'Z' ) || ( input[j] >= 'a' && input[j] <= 'z' ) ) {
        int space = toupper( input[j]) - 65 ;
        result[space]++ ;
        if ( result[space] > max )
          max = result[space] ;  

      } // if
     } // for j
    //cout << input << endl ;
  } // for i
  
  for ( int i = max ; i >= 1 ; i-- ) {
    for ( int j = 0 ; j < 26 ; j++ ) {
      if ( i == result[j] ) {
        char c = 'A' + j ;
        cout << c << " " << result[j] << endl ;
      }
        
    }
  } 
}