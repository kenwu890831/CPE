#include <iostream>

using namespace std ;
int main() {
  int max = 0, input1, input2;
  while( cin >> input1 >> input2 ) {
    int head, tail ;
    if ( input1 > input2 ) {
      head = input2 ;
      tail = input1 ;
    }
    else {
      head = input1 ;
      tail = input2 ;
    }
    
    for ( int i = head ; i <= tail ; i++ ) {
      int count = 1, num = i ;
      while ( num != 1 ) {
        if ( num % 2 == 1 )
          num = 3*num + 1 ;
        else
          num /= 2 ;
        count++ ;
      }
      
      //cout << count << endl ;
      if ( count > max ) 
        max = count ;
      
    }
    
    
    
    cout << input1 << " " << input2 << " " << max << endl ;
    max = 0;
  } // while
}