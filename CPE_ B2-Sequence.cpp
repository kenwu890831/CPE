#include <iostream>
#include <vector>
#include <set>

using namespace std ;

int main() {
  int n = 0 ;
  vector <int> temp ;
  set<int> sumTemp ;
  bool check = false ;
  int count = 1 ;
  while ( cin >> n ) {
    int input = 0 ;
    for ( int i = 0 ; i < n ; i++ ) {
      cin >> input ;
      temp.push_back( input ) ;
    } // for
    
    for ( int i = 0 ; i < (n-1) ; i++ ) {
      for ( int j = i ; j < n; j++ ) {
        int sum = temp.at(i) + temp.at(j) ;
        //cout << sum << endl ;
        if ( sumTemp.count( sum ) ){
          check = true ;
        }
        
        sumTemp.insert( sum ) ;
      } // for second
    } // for first
    
    cout << "Case #" << count ;
    if ( !check ) {
      cout << ": It is a B2-Sequence." << endl << endl ;
      check = false ;
    }
    else
      cout << ": It is not a B2-Sequence." << endl << endl ;
      
    sumTemp.clear() ;
    temp.clear() ;
    count++ ;
  } // while 
} // main()