#include <stdio.h>
#include <stdlib.h>

void return_arr(int *arr, int len){
   for(int i=0; i<len; i++){
    *(arr+i) = i;
    printf("%d", *(arr+i));
   }
    

}

int main(){
 int arr[30] = {0};
 int n;
 scanf("%d", &n);
  return_arr(arr, n);


}