#include <iostream>
#include <vector>

using namespace std ;

int main() {
  int T = 0 ;
  cin >> T ;
  vector <int> temp ;
  for ( int i = 0 ; i < T ; i++ ) {
    int N = 0,D = 0 ;
    cin >> D ;
    cin >> N ;
    int input = 0 ;
    for ( int j = 0 ; j < N ; j++ ) {
      cin >> input ;
      temp.push_back( input ) ;
    } // for
    
    int count = 0 ;
    for ( int j = 1 ; j <= D ; j++ ) {
      if ( j % 7 == 0 || j % 7 == 6 ) ;
      else {      
	      for ( int k = 0 ; k < temp.size() ; k++ ) {
	        //cout << j % 7 << "-----" << endl ;
	        if ( j % temp[k] == 0 ) {
	          count++ ;
	          break ;
	        } // if
	      } // for
      } // else
    } //for
    
    
    cout << count << endl ;
    temp.clear() ;
  } // T
} // main()