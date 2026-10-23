#include<stdio.h>
int main()
{
int num1,num2,num3,num4,max,min;
printf("Enter num1,num2,num3,num4:");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
max=num1;
min=num1;
if(num2>max)
max=num2;
if(num3>max)
max=num3;
if(num4>max)
max=num4;

 if(num2<min)
min=num2;
if(num3<min)
min=num3;
if(num4<min)
min=num4;
printf("\n Maximum number=%d",max);
printf("\n Minimum number=%d",min);
}