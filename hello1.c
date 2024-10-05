#include<stdio.h>
int main(){
   float s1,s2,s3,s4,s5,overall;
   printf("enter marks of maths: ");
   scanf(" %f",&s1);
   printf("enter marks of physics: ");
   scanf(" %f",&s2);
   printf("enter marks of chemistry: ");
   scanf(" %f",&s3);
   printf("enter marks of biology: ");
   scanf(" %f",&s4);
   printf("enter marks of computer: ");
   scanf(" %f",&s5);
   overall=(s1+s2+s3+s4+s5)/5;
   if(overall>=90)
   {
      printf("your grade is A, amazing");
   }
   else if(overall>=80)
   {
      printf("your grade is B, Great");
   }
   else if(overall>=70)
   {
      printf("your grade is C, good");
   }
   else if(overall>=60)
   {
      printf("your grade is D, Try better");
   }
   else if(overall>=40)
   {
      printf("your grade is E, attend extra classes");
   }
   else
   {
      printf("your grade is F, Sorry for your loss");
   }
}