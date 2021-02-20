/*#include <stdio.h>

int main()
{
float num1, num2, num3, num4, num5;

num1 = 2.56;
num2= 5/2;//2
num3= 5.0/2;//2.5
num4= 5/2.0;//2.5
num5= 5.0/2.0;//2.5

printf("arthmetic");

printf("%f\n",num1);
printf("%f\n",num2);
printf("%f\n",num3);
printf("%f\n",num4);
printf("%f\n",num5);

} */
#include <stdio.h>

int main()
{
    double n ;
    float x;
    scanf("%f",&x);
    n= (((1+x)*(1+x)-8))/(11-(x*x));
    printf("value = %lf", n);
}

