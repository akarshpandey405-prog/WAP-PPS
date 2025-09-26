
#include <stdio.h>

int main()
{
   float p;
   printf("Enter the value of principal :");
   scanf("%f",&p);
   
   float r;
   printf("Enter the value of rate :");
   scanf("%f",&r);
   
   float t;
   printf("Enter the value of time :");
   scanf("%f",&t);
   
   float si;
   si=(p*r*t)/100;
    printf("simple interest is %f",si);
   
   

    return 0;
}
