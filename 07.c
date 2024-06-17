#include<stdio.h>
void main()
{
int a[50],n,i,j,temp;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("The entered elements are\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

for(i=1;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("The sorted elements are\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}
