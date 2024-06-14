#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std ;


struct set {
    int mod;
    vector<int> odd ;	
    vector<int> even ;
};

void intputVector( vector<set> &list, int &modValue, int &input ) {
  for ( int i = 0; i < list.size() ; i++ ) {
    if ( modValue == list[i].mod ){
      if ( input % 2 == 0 )
	    list[i].even.push_back( input ) ;
	  else
	    list[i].odd.push_back( input ) ;
      return ;
    }

  }
  
  set temp ;
  temp.mod = modValue ;
  //cout << temp.mod << endl ;
  if ( input % 2 == 0 )
    temp.even.push_back( input ) ;
  else
    temp.odd.push_back( input ) ;
  list.push_back( temp ) ;
}

bool compareAsc(const set& a, const set& b) {
    return a.mod < b.mod;
}

bool oddSort(const int& a, const int& b) {
    return a > b;
} 

bool evenSort(const int& a, const int& b) {
    return a < b;
}

int main () {
  int size, M ;
  cin >> size >> M ;
  cout << size << " " << M << endl ;
  int input ;
  vector <set> list  ;
  for ( int i = 0 ; i < size ; i++ ) {
    cin >> input ;
    int modValue = input % M ;
    intputVector( list, modValue, input ) ;
  }
  
  sort(list.begin(), list.end(), compareAsc);
  
  for ( int i = 0 ; i < list.size() ; i++ ) {
    
    sort(list[i].odd.begin(), list[i].odd.end(), oddSort);
    for ( int j = 0 ; j < list[i].odd.size(); j++ ) {
      cout << list[i].odd[j] << endl ;
    }
    
    sort(list[i].even.begin(), list[i].even.end(), evenSort);
    for ( int j = 0 ; j < list[i].even.size(); j++ ) {
    cout << list[i].even[j] << endl ;
    }
    
  }

  cout <<  "0 0" <<  endl ;
}