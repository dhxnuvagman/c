#include<stdio.h>
#include<string.h>
void main( )
{
int units;
char name[20];
float charge=100;
printf("Enter your name \n");
scanf("%s",name);
printf("enter units consumed\n");
scanf("%d", &units);
if(units<=200)
{
charge=charge+(units*0.80);
}
else if(units>200 && units<=300)
{
charge=charge+(0.8*200) +(0.9*(units-200));
}

else
{
charge=charge+(0.8*200)+(0.9*100) +((units-300) *1);

}
if(charge>400)
{
charge=charge+(charge*0.15);
}
printf("Name:%s\n",name);
printf("Charge: Rs %.3f\n units consumed =%d", charge, units);
}


