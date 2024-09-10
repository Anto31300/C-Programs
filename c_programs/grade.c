#include <stdio.h>
int main() {
   float mark;
   printf("enter your mark:");
   scanf("%f",&mark);
   if (mark>90){

   {
    printf("Your Persentage = A");
   }
   
   }else if (mark >= 80 && mark <= 89)
   {
    printf("Your Persentage = B");

   }
   else if (mark>=70 && mark<=79)
   {
    printf("Your Persentage = C");
   }
   else if (mark>=60 && mark<=69)
   {
    printf("Your Persentage = D");
   }
   else if (mark>=50 && mark<=59)
   {
    printf("Your Persentage = E");
   }
   else{
    printf("YOU HAVE FAILED");
   }
return 0;
}
