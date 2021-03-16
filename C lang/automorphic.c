#include<stdio.h>
#include<math.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define li long int
#define ll long long int

int main()
{
    li n=0, last=0,sq=0,digits=0,power;
    scanf("%ld",&n);
    sq= n*n;
    if (n!=0)
    digits=(long int)log10 (n)+1;
    power= pow(10,digits);
    last= sq%(power);
    if (last==n)
    printf("true");
    else
    printf("false");
}