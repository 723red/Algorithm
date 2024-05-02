#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
   
   if(n<=1){
      return 1;
   }
   else{
    return n * factorial(n-1); 
   }
}


int main(void){
 


   //가장 끝의 0의 개수가 1개인   5팩 120  //        12*(2*5)
   // 가장 끝의 0의 개수가 2개인   15팩 10! * 11*12*13*14*15   *(2*5)*(2*5)

   int a;

   scanf("%d",&a);


   printf("%d", factorial(a));



}