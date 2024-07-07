#include <iostream>
#include <string>
#include <stack>

using namespace std ;

int main() {
  char input ;
  stack<char> s;
  while ( cin.get( input ) ) {
    if ( input == '"' ) {
      if ( s.empty() ) {
        s.push( input ) ;
        cout << "``" ;
      }
      else if ( s.top() == input ) {
        s.pop() ;
        cout << "''" ;
      }
    }
    else
      cout << input ;
  } // while
} // main()