#include<stdio.h>
int main(void){
    int num,i;
    printf("enter a number");
    scanf("%d",&num);
    for ( i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;

}