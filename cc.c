#include<stdio.h>
#include<math.h>
int main()
{
   int n,count;
   printf("enter the number: ");
   scanf("%d",&n);
   count=0;
   n=abs(n);
   while(n>0){
    n=n/10;
    count++;
   }
   printf("The number of digits are: %d",count);
   
}