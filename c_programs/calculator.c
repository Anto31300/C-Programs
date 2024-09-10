#include <stdio.h>
int main(void) {
   int num1,num2,option,reslt;
   printf("enter your nos:");
   scanf("%d%d",&num1,&num2);
   printf("1=addition \n2=subtraction \n3=multiplication \n4=division \n enter your option");
   scanf("%d",&option);
   if (option==1){
    reslt=num1+num2;
    printf("Result=%d",reslt);
   }
   else if (option==2){
    reslt=num1-num2;
    printf("Result=%d",reslt);
   }
   else if (option==3)
   {
    reslt=num1*num2;
    printf("Result=%d",reslt);
   }
   else if (option==4)
   {
    reslt=num1/num2;
    printf("Result=%d",reslt);
   }
   else{
    printf("pick an option mentioned above fool");
   }

   return 0;
}