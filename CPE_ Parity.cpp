#include <iostream>
#include <bitset>

using namespace std ;

int main() {
  int i ;
  while ( cin >> i ) {
    if ( i == 0 )
      break ;
      
    bitset<32> bits = i;
    //cout << bits << endl ;
    int addr = 30 ;
    while ( bits[addr] != 1 ) 
      addr-- ;
    cout << "The parity of ";
    for( ; addr >=0 ; addr-- ) {
      cout << bits[addr];
    } 
    
    cout << " is " << bits.count() << " (mod 2).\n";
  } // while
} // main()