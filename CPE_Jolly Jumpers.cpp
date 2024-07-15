#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std ;

int main() {
  int n, temp, input ;
  vector <int> list ;
  while ( cin >> n ) {
    cin >> temp ;
    for ( int i = 1; i < n; i++ ) {
      cin >> input ;
      int sub = input - temp ;
      temp = input ;
      sub = abs( sub ) ;
      list.push_back( sub ) ;
    } // for
    
    sort( list.begin(), list.end() ) ;
    bool check = false ;
    for ( int i = 0; i < ( n - 1 ); i++ ) {
      if ( list[i] != ( i + 1 ) ) {
        check = true ;
        break ;
      }
        
    }
    
    
    if ( check )
      cout << "Not jolly" << endl ;
    else
      cout << "Jolly" << endl ;
    list.clear();
  } // while
} // main()