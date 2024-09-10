#include<stdio.h>
int main(void){
    int num,i,result=0;
    printf("enter a limit:");
    scanf("%d",&num);
    for ( i = 1; i < num; i++)
    {
        if (i%2 != 0)
        {
            result += i;
        }
    }
printf("sum of odd numbers of %d:\n%d",num,result);


    
return 0;


}