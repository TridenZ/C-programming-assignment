#include<stdio.h>
#include<string.h>
void main()
{
    int check,alpha;
    printf("Enter the character: ");
    scanf("%c",&alpha);
    if(alpha>=65&&alpha<=90)
    {
        printf("it is an uppercase!");
    }
    else if(alpha>=97&&alpha<=122)
    {
        printf("it is an lowercase!");
    }
}