#include <stdio.h>
int main() {
   float num1,num2,num3,average;
   printf("enter your nos:");
   scanf("%f%f%f",&num1,&num2,&num3);
   average=(num1+num2+num3)/3;
   printf("result is %f:",average);
   return 0;
}