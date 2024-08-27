#include <iostream>
#include <vector>
using namespace std ;

int main() {
  int n , m ;
  vector <int> temp ;
  while ( cin >> n >> m ) {
    temp.push_back( n ) ;
    while ( n > 1 && m != 1 ) {
      n /= m ;
      
      if ( temp.back() % m != 0 ) {
        temp.clear() ;
        break ;
      }
        
        
      temp.push_back( n ) ;
    } // while n > 0
    
    if ( temp.empty() || m == 1 )
      cout << "Boring!";
    else {
        cout << temp.at(0) ;
	    for ( int i = 1 ; i < temp.size() ; i++ ) {
	      cout << " " << temp.at(i) ;
	    } // for
    } // else
    
    cout << endl  ;
    temp.clear() ;
  } // while 
} // main()