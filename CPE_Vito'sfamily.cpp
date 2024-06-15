#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

void findHouse() {
  int famiNum,input,result = 0 ;
  cin >> famiNum ;
  
  vector<int> list ;
  for ( int i = 0 ; i < famiNum ; i++ ) {
      cin >> input ;
	  list.push_back(input) ;
  }
  
  sort(list.begin(), list.end() ) ;
  
  for ( int i = 0 ; i < famiNum ; i++ ) {
	  result += abs(list[i] - list[list.size()/2]) ;
  }
    
    
  cout << result << endl ;
} //findHouse()

int main() {
    int times ;
	cin >> times ;
	for ( int i = 0 ; i < times ; i++ ) {
	  findHouse() ;
	}
	//cout << times << endl ;
}