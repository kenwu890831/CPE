# include<iostream>
# include<math.h>

using namespace std;

int main() {
  double input, area,dot, out, PI= acos(-1); ;
  while ( cin >> input ) {
    out = (input*(input/2))- (input*input*PI)/12- ( (input/2)*(input/2)*sqrt(3)/2) ;
    dot = 4*((input*input)- (input*input*PI)/4 - 4*out);
    area = (input*input) - 8*out - dot ;
    printf("%.3f %.3f %.3f\n", area, dot, out*8);
  } // while
}