#include <stdio.h>
#include <math.h>
int main() 
{
    int a, b, c, s, A;
    printf("Enter the values of a ,b ,c :\n");
    scanf("%d%d%d",&a,&b,&c);
     s = (a + b + c) / 2;
      printf("s=%d",s);
     A = sqrt(s * (s - a) * (s - b) * (s - c));
      printf("\n Area =%d",A);
}    
