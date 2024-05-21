#include <iostream>

#include <string.h>
using namespace std ;

int main() {
  string input ;
  char board[] = {'`', '1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
                  'A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','\.','/'} ;
  while (getline(cin, input)) {
    
    string result = "" ;
    for ( int i = 0 ; i <  input.length() ; i++ ) {
      bool upper = false ;
      
      if ( input[i] >= 97 && input[i] <= 122 ) {
        input[i] -= 32 ;
        upper = true ;
      } 
      
      if ( input[i] == ' ' ) {
        result += input[i];
      }
      else {
        for ( int j = 0 ; j < sizeof(board) ; j++ ) {
          if ( board[j] == input[i] ) {
            if ( upper ) {
              result += ( board[j-1]) ;
            }
            else {
              result += ( board[j-1]) ;
            }
          }
        }
        
      }
    }
    
    
    cout << result << endl ;
  } // while

}