#include<stdio.h>
int return_arr(int arr[], int n){
   
   for(int i=0; i<n; i++){
    arr[i] = i;
   }
  
     return *arr;
}

int main(void){
  int take[100]={10,};

  int n;
  scanf("%d", &n);
  printf("%d\n", return_arr(take, n));


return 0;
}