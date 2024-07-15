#include <iostream>

using namespace std ;

int main() {
  string week_of_days[]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
  int month_of_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int n,M,D ;
  cin >> n ;
  for ( int i = 0 ; i < n ; i++ ) {
    cin >> M >> D ;
    for(int i = 0; i< M-1; i++){
 		D+= month_of_days[i];
	}
	
	cout<<week_of_days[D%7]<< endl;

  } // for

  
} 