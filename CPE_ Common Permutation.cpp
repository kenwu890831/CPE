#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {

  string a, b ;
  vector<char> result ;
  while ( getline(cin,a) && getline(cin,b ) ) {
    for ( int i = 0 ; i < a.size() ; i++ ) {
      for ( int j = 0 ; j < b.size() ; j++ ) {
        if ( a[i] == b[j] && a[i] != ' ' ) {
          result.push_back( a[i] ) ;
           b.erase(j, 1);
           break ;
        } // countinue
      } // for b size
    } // for a size
    
    sort( result.begin() , result.end() ) ;
    for ( int i = 0 ; i < result.size() ; i++ )
      cout << result[i] ;
    cout << endl ;
    result.clear() ;
  } // while main
} // main()

/*  

Other people's solution

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s1,s2;
	while(getline(cin,s1) && getline(cin,s2)){
		int i=0, a_len, b_len;
		while(i<26){
			a_len = count(s1.begin(), s1.end(), 'a'+i);
			b_len = count(s2.begin(), s2.end(), 'a'+i);
			cout << string(min(a_len, b_len), 'a'+i);
			i++;
		}
		cout << endl;
	}
}
*/