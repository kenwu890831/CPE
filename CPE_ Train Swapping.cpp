#include <iostream>

using namespace std ;

void trainSwap( int *temp, int & count, int l ) {
  
  for ( int i = 0 ; i < l - 1 ; i++ ) {
    bool check = false ;
    int fTemp = temp[i] ;
    int final = i ;
    for ( int j = i + 1 ; j < l ; j++ ) {
      if ( fTemp > temp[j] ) {
        temp[final] = temp[j] ;
        temp[j] = fTemp ;
        count++ ;
        final = j ;
        check = true ;
      }
      
      /*for ( int k = 0 ; k < l ; k++ )
        cout << temp[k]<< " " ;
      cout << endl ;*/
      
      
    }
    
    if ( check )
        i-- ;
  }
    
} // trainSwap()

int main() {
  int n = 0 ;
  cin >> n ;
  
  for ( int i = 0 ; i < n ; i++ ) {
    int l = 0 ;
    cin >> l ; 
    int temp[l] ;
    for ( int j = 0 ; j < l ; j++ ) {
      
      cin >> temp[j] ;
      
    } // for 
    
    int count = 0 ;
    trainSwap( temp, count, l ) ; 
    cout << "Optimal train swapping takes " << count << " swaps." << endl ;
  } // for
} // main()