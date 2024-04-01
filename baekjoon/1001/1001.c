#include <stdio.h>
int main(void){
 int num;
 int sum=0;

 do{
  printf("숫자를 입력하세요:");
  scanf("%d", &num);
  sum += num;
 }while(num !=0);
 printf("입력한 숫자들의 합은 %d입니다", sum);

 

  return 0;
}