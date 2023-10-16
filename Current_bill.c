#include<stdio.h>
int main()
{
    int unit;
    float unitcost,bill,tbill;
    scanf("%d",&unit);
    if(unit<200)
    {
        unitcost=1.20;
    }
    else if(unit>=200 && unit<400)
    {
        unitcost=1.50;
    }
    else if(unit>=400 && unit<600)
    {
        unitcost=1.80;
    }
    else if (unit>=600)
    {
        unitcost=2.00;
    }
    bill=unit*unitcost;
    if(bill>400)
    {
        tbill=bill+(bill*0.15);
        printf("%.2f",tbill);
        
    }
    else 
    {
        tbill=bill+100;
        printf("%.2f",tbill);
    }
}