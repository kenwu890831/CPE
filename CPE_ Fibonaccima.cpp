#include <iostream>
#include <vector>

using namespace std ;

int main() {
  int n = 0 ;
  cin >> n ;
  int fib = 1, preFib = 1 ;
  vector <int> temp ;
  vector <int> result ;
  temp.push_back( 1 ) ;
  while ( fib < 100000000 ) {
    int fibTemp = fib ;
    fib += preFib ;
    preFib = fibTemp ;
    temp.push_back( fib ) ;
  } // while
  
  for ( int i= 0 ; i < n ; i++ ) {
    int input ;
    cin >> input ;
    int inputTemp = input ;
    bool check = false ;
    for ( int j = temp.size() -1 ; j >= 0 ; j-- ) {
      if ( !check && input >= temp[j] ) {
        check = true ;
      }
      
      if ( check ) {
        if ( input >= temp[j] ) {
          input -= temp[j] ;
          result.push_back( 1 ) ;
        }
        else {
          result.push_back( 0 ) ;
        }
      }
      
    } // for 
    cout << inputTemp << " = " ; 
    for ( int k = 0 ; k < result.size() ; k++ )
      cout << result[k] ;
    cout << " (fib)" << endl ;
    result.clear() ;
  } // for 
} // main()