#include<stdio.h>
int main()
{
 float C,F;
 printf("Enter the temperature in celsius:");
 scanf("%f",&C);
 F=(C*9/5)+32;
 printf("Farenheit temperature is %f",F);
 printf("\nEnter temperature in Fahrenheit:");
 scanf("%f", &F);
 C= (F - 32) * 5 / 9;
 printf("Celsius = %f",C);
}