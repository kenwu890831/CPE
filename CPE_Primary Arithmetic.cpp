#include <stdio.h>
#include <string.h>
int main() {
  char input1[10], input2[10] ;
  int tail1, tail2, count = 0, num1, num2 ;
  bool carry = false ;
  while ( scanf("%s %s", input1, input2) != EOF ) {
    tail1 = strlen(input1)-1 ;
    tail2 = strlen(input2)-1 ;
    
    if ( ( strlen(input1) == 1 ) && ( strlen(input2)== 1 ) && ((input1[tail1] - '0') == 0)  && (( input2[tail2] - '0' )== 0) )
      break ;
    while( tail1 >=0 && tail2 >=0 ) {
      num1 = input1[tail1] - '0', num2 = input2[tail2] - '0' ;
      if ( carry ) {
        num1++ ;
        carry = false ;
      }
      
      if ( ( num1 + num2 ) > 9 ) {
        carry = true ;
        count++ ;
      }

      tail1--;
      tail2--;
      
      
    }

    if ( carry ) {
      if ( tail1 >= 0 ) {
        while ( tail1 >= 0 ) {
          num1 = input1[tail1] - '0' ; 
          if ((  num1 + 1 ) > 9 ){
            carry = true ;
            count++ ;
            tail1-- ;
          }
          else 
            break ;
        }
      }
      else if ( tail2 >= 0 ) {
        while ( tail2 >= 0 ) {
          num2 = input2[tail2] - '0' ; 
          if ((  num2 + 1 ) > 9 ){
            carry = true ;
            count++ ;
            tail2-- ;
          }
          else 
            break ;
        }
      }
    }
    
    if ( count == 0 )
      printf("No carry operation.\n" ) ;
    else if ( count > 1 ) 
      printf("%d carry operations.\n", count ) ;
    else
      printf("%d carry operation.\n", count ) ;
    count = 0 ;
    carry = false ;
    
    
    
  }
}
