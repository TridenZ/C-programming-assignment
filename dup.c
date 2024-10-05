#include<stdio.h>
#include<math.h>
int main()
{
 int num,last_digit,first_digit,sum;
 printf("Enter the number: ");
 scanf("%d",&num);
 last_digit=num%10;
 while(num>10){
    num=num/10;
 }
 first_digit=num;
 sum=first_digit+last_digit;
 printf("The sum of first and last digits are: %d",sum);
}