#include<stdio.h>
int main()
{
    float bill,units;
    printf("enter the units: ");
    scanf(" %f",&units);
    if(units<=50)
    {
        bill=units*0.50;
        printf("the bill amt is: %.2f",bill+(bill/5.0));
    }
    else if(units<=150)
    {
        bill=(units-50.0)*0.75+(50.0*0.50);
        printf("the bill amt is: %.2f",bill+(bill/5.0));
    }
    else if(units<=250)
    {
        bill=(units-150.0)*1.20+(100.0*0.75)+(50.0*0.5);
        printf("the bill amt is: %.2f",bill+(bill/5.0));
    }
    else
    {
        bill=(units-250)*1.5+(100.0*1.2)+(100*0.75)+(50*0.5);
        printf("the bill amt is: %.2f",bill+(bill/5.0));
    }
}