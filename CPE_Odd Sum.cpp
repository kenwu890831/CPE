#include <iostream>
#include <cmath>

using namespace std ;

int main() {
  int T ;
  cin >> T ;
  for ( int i = 0 ; i < T ; i++ ) {
    int input1 , input2 ;
    cin >> input1 >> input2 ;
    if ( input1 % 2 == 0 )
      input1 += 1 ;
    if ( input2 % 2 == 0 )
      input2 -= 1 ;
      
    int  sub = ( input2 / 2 )  - ( input1 / 2 )+1;
    //cout << input1 << " " << input2<< " " << sub ;
    int result = sub*( input2 + input1 ) / 2;
    
    
    cout << "Case " << i+1 << ": " << result << endl ;
  } // for
} // main()