#include<stdio.h>

int main(){
  float a, b ;
  printf("enter a number \n");
  scanf("%f", &a);
  printf("enter b number \n");
  scanf("%f", &b);
  float sum, mul, div, sub;
  sum= a+b;
  mul= a*b;
  div= a/b;
  sub= a-b;
  printf("sum of %f", a);
  printf( " and %f",b); 
  printf(" = %f \n", sum);
  
  printf("multiplication of %f", a);
  printf( " and %f",b);
  printf(" = %f \n", mul);
  
  printf("division of %f", a);
  printf( " and %f",b);
  printf(" = %f \n", div );
  
  printf("subtraction of %f", a);
  printf( " and %f",b);
  printf(" = %f \n", sub);

  
  return 0;
}