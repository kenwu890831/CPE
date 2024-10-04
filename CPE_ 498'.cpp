#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std ;

int main() {
  int x = 0 ;
  vector <int> list ;
  while ( cin >> x ) {
    string input ;
    getline( cin, input ) ; // enter
    getline( cin, input ) ;
    stringstream ss(input) ;
    int a ;
    while ( ss >> a ) {
      list.push_back( a ) ; 
    } // while
    
    int result = 0 ;
    int size = list.size()-1 ;
    for ( int i = 0 ; i < list.size() -1 ; i++ ) {

      result += ( list[i]*size*pow(x,size-1)) ;
      size -= 1 ;
    } // for
    
    cout << result << endl ;
    list.clear() ;
  } // while
} // main()