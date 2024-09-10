#include <stdio.h>
int main() {
   int num;
   printf("enter your no:");
   scanf("%d",&num);
   if(num<0){
    printf("number is negative");
   }else{
    printf("no is positive");
   }
   return 0;
}