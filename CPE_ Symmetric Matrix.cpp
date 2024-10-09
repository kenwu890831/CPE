#include <iostream>
#include <stack>

using namespace std ;

int main() {
  int t = 0 ;
  cin >> t ;
  
  for ( int i = 0 ; i < t ; i ++ ) {
    bool check = true ;
    int line = 0 ;
    char c = ' ' ;
    cin >> c ; // N
    cin >> c ; // =
    cin >> line ;    
    int length = line * line ;
    
    int temp = 0, count = 0, half = 0 ;
    stack <int> list ;
    bool odd = false ;
    if ( length % 2 == 1 ) {
      odd = true ;
      half = length / 2  ;
    }
    else
      half = length / 2 - 1;
      
    
    if ( odd ) {
	  for ( int j = 0 ; j < length ; j++ ) {
	    cin >> temp ;
	    if ( j < half ) {
	      list.push( temp ) ;
	    }
	    else if ( j > half ) {
	      if ( list.top() != temp ) {
	        check = false ;
	      }
	        
	      list.pop() ;  
	    }
	    
	  } // for
    }
    else {
      for ( int j = 0 ; j < length ; j++ ) {
	    cin >> temp ;
	    if ( temp < 0 )
	      check = false ;
	    if ( j <= half ) {
	      list.push( temp ) ;
	    }
	    else {
	      if ( list.top() != temp ) {
	        check = false ;
	      }
	        
	      list.pop() ;  
	    }
	    
	  } // for
    }
    
    
    if ( check ) 
      cout << "Test #" << i + 1 << ": Symmetric." << endl ;
    else
      cout << "Test #" << i + 1 << ": Non-symmetric." << endl ;
    
  } // for main
} // main() 