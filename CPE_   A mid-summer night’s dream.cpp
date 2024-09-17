#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,temp[1001];
	
	while( cin >> n ){
		for ( int i = 0 ; i < n ; i++ ) {
		  cin >> temp[i] ;
		}		
		
		sort( temp, temp+n );
		int m1 = temp[ n/2 ], m2 = temp[(n-1)/2 ], count = 0;
		for ( int i = 0 ; i < n ; i++ ) {
			if( temp[i]== m1||temp[i] == m2 )
			  count++ ;
	    }
		cout << m2 <<" "<< count <<" "<< m1-m2+1 << endl;	
	}
}