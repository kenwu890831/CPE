#include <iostream>
#include <string>

using namespace std ;

int trans( string input ) {

  int result = 0 ;
  int c = 1 ;
  for ( int i = input.length() -1 ; i >= 0 ; i-- ) {
    if ( input[i] == '1' ) {
      result += c ;
    } // if
    
    c *= 2 ;
  } /// for
  
  //cout << result << endl ;
  return result ;
} // trans()
void cal( string s1, string s2 ) {
  int t1 = trans( s1 ) ;
  int t2 = trans( s2 ) ;
  
  int sub = 0 ;
  if ( t1 > t2 )
    sub = t2 ;
  else
    sub = t1 ;
    
  if ( t1 % sub == 0 && t2 % sub == 0 ) {
    cout << "All you need is love!" << endl ;
    return ;
  } 
    
    
  sub /= 2 ;
  
  while ( sub >= 2 ) {
    if ( t1 % sub == 0 && t2 % sub == 0 ) {
      cout << "All you need is love!" << endl ;
      return ;
    }
    
    sub-- ;
  } // while
  
  
  cout << "Love is not all you need!" << endl ;
} // cal()
int main() {
  int n = 0 ;
  cin >> n ;
  for ( int i = 0 ; i < n ; i++ ) {
    string s1, s2 ;
    cout << "Pair #" << i+1 << ": " ;
    cin >> s1 >> s2 ;
    cal( s1, s2 ) ;
  } // for
} // main()