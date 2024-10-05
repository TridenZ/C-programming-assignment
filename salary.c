#include<stdio.h>
int main()
{
    float gross,basic,hra,da;
    printf("Enter your basic salary: ");
    scanf("%f",&basic);
    if(basic<=10000)
    {
        hra=basic/5;
        da=(4*basic)/5;
        gross=basic+hra+da;
        printf("your gross salary is %.2f",gross);
    }
    else if(basic<=20000)
    {
        hra=basic/4;
        da=(9*basic)/10;
        gross=basic+hra+da;
        printf("your gross salary is %.2f",gross);
    }
    else
    {
        hra=(3*basic)/10;
        da=(95*basic)/100;
        gross=basic+hra+da;
        printf("your gross salary is %.2f",gross);
    }
}