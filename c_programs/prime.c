#include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("enter the no:");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag = 1;
            break;
        }
        
    }
if (flag == 0)
{
    printf("it is a prime no");
}
else{
    printf("not a prime no");
}    
}