#include <iostream>

using namespace std ;


int main() {
  int m = 0 , n = 0, count = 1 ;
  
  while ( cin >> m >> n ) {
    if ( m == 0 && n == 0 )
      break ;
    if ( count != 1 ) 
      cout << endl ;
    int matrix[102][102] = {0} ;
    for ( int i = 1 ; i < m+1 ; i++ ) {
      for ( int j = 1 ; j < n+1 ; j++ ) {
        char temp = 0 ;
        cin >> temp ;
        if ( temp == '*' ) {
          matrix[i][j] = -10 ;
          for ( int k = i-1 ; k <= i+1 ; k++ ) {
            for ( int v = j-1 ; v <= j+1 ; v++ ) {
              matrix[k][v]++ ;
            } // v
          } // k
        }      
      } // J
    } // I
    
    cout << "Field #" << count << ":" << endl ;
    for ( int i = 1 ; i < m+1 ; i++ ) {
      for ( int j = 1 ; j < n+1 ; j++ ) {
        if ( matrix[i][j] < 0 )
          cout << "*" ;
        else 
          cout << matrix[i][j] ;
      } // J
        cout << endl ;
    } // I 
    
    count++ ;
    
  } // while
} // main()