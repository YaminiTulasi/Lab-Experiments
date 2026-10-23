#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
float avg;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
printf("Enter c value:");
scanf("%d",&c);
printf("Enter d value:");
scanf("%d",&d);
printf ("Enter e value:");
scanf("%d",&e);
sum=a+b+c+d+e;
printf("sum is %d",sum);
avg=(float)sum/5;
printf("avg value of %f",avg);
}

    