#include<stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
printf("Enter c value:");
scanf("%d",&c);
sum=a+b+c;
printf("sum of %d,%d and %d is %d",a,b,c,sum);
avg=sum/3;
printf("avg value of %f",avg);
}

    