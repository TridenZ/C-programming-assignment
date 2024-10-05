#include<stdio.h>
int main()
{
   long long int n,r,binary=0,base=1,decimal=0;
   printf("enter a number: ");
   scanf(" %lld",&n);
   while(n>0){
    r=n%10;
    decimal=decimal+r*base;
    n=n/10;
    base=base*8;
   }
   base=1;
   while(decimal>0){
    r=decimal%2;
    binary=binary+r*base;
    decimal=decimal/2;
    base=base*10;
   }
   printf("the number in binary is: %lld ", binary);

}