#include <iostream>

using namespace std ;

int main(){
  int T ;
  cin >> T ;
  int input1, input2 ;
  for ( int i = 0 ; i < T ; i++ ) {
    cin >> input1 >> input2 ;
    int a = ( input1 + input2 ) / 2 ;
    int b = ( input1 - input2 ) / 2 ;
    if ( ( a+b == input1) && (a-b == input2)&& a>=0 && b >= 0 )
      cout << a << " " << b << endl ;
    else 
      cout << "impossible" << endl ;
  } // for
} // main()