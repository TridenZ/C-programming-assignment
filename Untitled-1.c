#include<stdio.h>
int main()
{
    int num,rev,r,sum=0;
    printf("enter the number: ");
    scanf("%d",&num);
    num=rev;
    while(num>0)
    {
      r=num%10;
      sum=sum*10+r;
      num=num/10;
    }
    if(sum==rev){
        printf("it is a palindrome!");
    }
    else
    {
        printf("it is not a palindrome");
    }
}