#include <stdio.h>
int main() {
   int a=20,b=39,temp;
   setbuf(stdout,NULL); 
   temp=a;
   a=b;
   b=temp;

   printf("a:%d b:%d",a,b);
   return 0;
}