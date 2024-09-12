#include<stdio.h>
#include<string.h>
int main(){

    char n[100];
    printf("enter the string:");
    scanf("%s",n);
    
int flag = 0 ; 

   int string_len = strlen(n);
    
        int j = string_len-1;

        for(int i=0;i<=j;i++){
            if(n[i] != n[j]){
                printf("This is not a paliendrome .");
                flag=1;
                break;
            }
            j--;
        } 
    if(flag==0){
        printf("\nthis is a paliendrom");
    }
return 0;
}