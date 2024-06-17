#include<stdio.h>
#include<math.h>
main()
{
    float arr[100],sum=0,sum1=0,sd,mean,var,diff;
    float *ptr;
    int n,i;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%f\n",&arr[i]);
    }
    ptr=arr;
    for (i=0;i<n;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Sum=%f\n",sum);
    mean=sum/n;
    printf("Mean is %f\n",mean);
    for(i=0;i<n;i++)
    {
        diff=*(ptr+i)-mean;
        sum1=sum1+pow(diff,2);
    }
    var=sum1/n;
    printf("Variance is %f\n",var);
    sd=sqrt(var);
    printf("Standard deviation is %f\n",sd);
}
