#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the length of sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {
        printf("it is a equilateral traingle!");
    }
    else if(a==b||a==c||b==c)
    {
        printf("it is a isoceles traingle!");
    }
    else{
        printf("it is a scalene traingle!");
    }
}