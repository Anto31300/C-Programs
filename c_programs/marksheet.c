#include <stdio.h>
int main() {
   float mark;
   printf("enter your mark:");
   scanf("%f",&mark);
   if (mark>=50){

   {
    printf("you passed");
   }
   
   }else if (mark<50)
   {
    printf("you failed");

   }
   else{
    printf("enter correct");
   }
   return 0;
}