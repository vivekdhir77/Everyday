#include <stdio.h>

int mihir(int);
int main()
{
    int n; scanf("%d", &n);
    mihir(n);
    
}

void mihir(int n)
{
    int c500=0, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;
    c500 = n/500; n = n%500; 
    c100= n/100; n = n%100; 
    c50= n/50; n = n%50; 
    c20= n/20; n = n%20;
    c10= n/10; n = n%10;
    c5= n/5; n = n%5; 
    c2= n/2; n = n%2;
    c1= n/1; n = n%1;
    printf("%d", (c500+c100+c50+c20+c10+c5+c2+c1));
}