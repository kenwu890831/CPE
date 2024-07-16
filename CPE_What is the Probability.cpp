#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;

int main()
{
	int times;
	cin >> times;
	while(times--){
		double n, p, q, i_th, result ;
		cin >> n >> p >> i_th ;
		q = 1 - p ;
		if( p == 0 ) 
		  result = 0 ;
		else{
			result = pow( q, i_th - 1 ) * p / ( 1 - pow( q, n )) ;
		}
		cout << fixed << setprecision(4) << result << endl ;
	}
}