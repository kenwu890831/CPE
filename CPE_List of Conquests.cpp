#include <iostream>
#include <string>
#include <map>

using namespace std ;

int main() {
  string input1,input2,input3 ;
  int num ;
  cin >> num ;
  map<string,int> map ;
  for ( int i = 0 ; i < num ; i++ ) {
    cin >> input1 >> input2 >> input3 ;
    map[input1]++ ;

  }
  
  for (const auto& i : map) {
    cout << i.first << " " << i.second << "\n";
  }
}