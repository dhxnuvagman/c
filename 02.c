#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main( )
{
float a, b, c, root1, root2, real, img, d;
printf("Enter the 3 coefficients:\n");
scanf("%f%f%f", &a, &b, &c);
if (a * b * c == 0)
{
printf("Roots cannot beDetermined:\n");
exit(0);
}
d = (b*b)-(4*a*c);
if(d==0)
{
printf("Roots are equal\n");
root1=-b / (2*a);
root2= -b / (2*a);
printf ("root1=%f\n", root1);
printf ("root2=%f\n", root2);
}
else if(d>0)
{
printf("Roots are real and distinct\n");
root1= (-b + sqrt(d)) / (2*a);
root2= (-b - sqrt(d)) / (2*a);
printf ("root1=%f\n", root1);
printf ("root2=%f\n", root2);
}
else
{ 
printf("Roots are complex\n");
real = -b /(2*a);
img = sqrt (fabs (d)) / (2 * a);
printf ("root1=%f+i%f\n", real, img);
printf ("root2=%f- i%f\n", real, img);
}
}
