#include <iostream>

using namespace std ;
bool NP = false ;
bool eachReserve( char input1, char input2 ) {
  if ( input1 == 'E' && input2 == '3' )
    return true ;
  else if ( input1 == 'J' && input2 == 'L' )
    return true ;
  else if ( input1 == 'L' && input2 == 'J' )
    return true ;
  else if ( input1 == 'S' && input2 == '2' )
    return true ;
  else if ( input1 == 'Z' && input2 == '5' )
    return true ;
  else if ( input1 == '2' && input2 == 'S' )
    return true ;
  else if ( input1 == '3' && input2 == 'E' )
    return true ;
  else if ( input1 == '5' && input2 == 'Z' )
    return true ;
  return false ;
}

bool Palindrome( string input, char own[] ) {
  int head = 0, tail = input.length() -1 ;
  while ( head < tail ) {
    if ( input[head]== input[tail] ) ;
    else {
      if ( eachReserve( input[head], input[tail] ) ) {
        NP = true ;
      }
      else {
        return false ;
      }
    }
    head++ ;
    tail-- ;
    //cout << head << tail << endl ;
  }
  if ( input.length()%2 == 1 ) {
  
  }
  else {
  }
  
  return true ;
} // Palindrome

bool check ( string input, char own[] ) {
  for ( int i = 0 ; i < input.length() ; i++ ) {
    bool c = false ;
    for ( int j = 0 ; j < 13 ; j++ ) {
      if ( input[i] == own[j] )
        c = true ;
    }
    
    if ( c == false )
      return false ;
  }
  
  return true ;
}

int main () {
	string input = "" ;
	char own[] = {'A','H','I','M','O','T','U','V','W','X','Y','1','8'};
	while ( cin >> input ) {
	  bool isPalindrome = false ;
	  NP = false ;
	  isPalindrome = Palindrome( input, own ) ;
	  cout << input ;
	  if ( !isPalindrome )
	    cout << " -- is not a palindrome." << endl ;
	  else if ( NP )
	    cout << " -- is a mirrored string." << endl ;
	  else if ( check( input, own ) )
	    cout << " -- is a mirrored palindrome." << endl ;
	  else 
	    cout << " -- is a regular palindrome." << endl ;
	  cout << endl ;
	  
	}
}