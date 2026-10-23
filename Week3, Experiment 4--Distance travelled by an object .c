#include<stdio.h>
void main()
{
double u,t,a,d;
printf("Enter initial velocity u:");
scanf("%lf",&u);
printf("Enter time t:");
scanf("%lf",&t);
printf("Enter acceleration a:"); 
scanf("%lf",&a);
d=(u*t)+(.5*a*t*t);
printf("The distance is %lf",d);
}

    