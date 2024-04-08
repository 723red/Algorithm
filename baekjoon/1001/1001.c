#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 100001

typedef struct{

 int top;
 int stack[size];
}stacktype;
void init(stacktype *c){
  c->top = -1;
}

bool is_empty(stacktype *c) {
    if (c->top == -1) {
        return true;
    }
    else {
        return false;
    }
}
void put(stacktype *c, int item) {
    if (c->top == size - 1) {
      
    }
    else {
        c->top += 1;
        c->stack[c->top] = item;
    }
}

int pirnt1_stack(stacktype *c, int item) {
    if (is_empty(c)) {
        
      
        return -1; 
    }
    else {
       int item = c->stack[c->top];
       c->top = c->top - 1;
       return item;
    }
}
void print4(int item, stacktype *c) {
  
  printf("%d", c->top+1);
}
void print2_stack(stacktype *c) {
    if (is_empty(c)) {
        printf("1");
        
    }
    else {
        printf("0");
      
    }
}
int number5(int item, stacktype *c) {
    if (is_empty(c)) {
       return -1;
    }
     return c->stack[c->top];
}

int main(void) {

   stacktype *T = malloc(sizeof(stacktype));
   init(T);
    int number;
    int netro_number;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &number);

        switch (number) {
        case 1:
          scanf("%d", &netro_number);
       
            put(T, netro_number);
           
            break;
          
        case 2:
           printf("%d", pirnt1_stack(T, number));
          printf("\n");
            break;
        case 3:
            print4(number,T);
          printf("\n");
            break;
        case 4:
            print2_stack(T);
          
            break;
        case 5:
            printf("%d", number5(number,T));
          
         
            break;
        default:
            break;

        }


    }




}
