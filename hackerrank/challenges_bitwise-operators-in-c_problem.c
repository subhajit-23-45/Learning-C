// in this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

// Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

// Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

// Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .

// For example, for integers 3 and 5,

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,or=0,xor=0;
 for(int i = 1;i<=n;i++)
 {
     for(int j = i+1;j<=n;j++)
     {
         
       if((i&j) > and &&(i&j) < k){
         and = i&j;
       }
       if( (i|j) > or && (i|j) < k) {
         or = i|j;
       }
       if( (i^j) > xor && (i^j) < k){
         xor = i^j;
       }
     }
 }
 printf("%d\n%d\n%d",and,or,xor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}