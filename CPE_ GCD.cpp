#include <iostream>
#include <cmath>
using namespace std ;

int GCD( int i, int j ) {
  if ( j % i == 0 )
    return i ;
  else {
    //cout << sqrt(i) << endl ;
    int temp = i/2+1 ;
    //cout << temp << endl ;
    for ( int k = temp ; k > 0 ; k-- ) {
      if ( i % k == 0 && j % k == 0 )
        return k ;
    } // for
  } // else
  
  return 0 ;
} // GCD
int main() {
  int G = 0 ;
  int N = 0 ;
  while ( cin >> N ) {
    if ( N == 0 )
      break ;
    else {
      for(int i=1;i<N;i++) {
        for(int j=i+1;j<=N;j++){
		  G+=GCD(i,j);	
		  //cout << i << " " << j << " " << GCD(i,j) << endl ;
		}
      }
    }
    
    cout << G << endl ;
    G = 0 ;
  } // while
} // main()