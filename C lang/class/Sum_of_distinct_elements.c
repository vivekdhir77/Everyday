#include<stdio.h>
#define ll long long int
int main()
{
    ll N,sum=0, xor1=0; scanf("%lld",&N);
    while(N--)
    {   ll xor2=1,a=0;
        scanf("%lld",&a);
        xor2=xor1;
        if (a!=0)
        xor1 =xor1^a;
        if (xor1 != 0) sum+=a;
        else xor1=xor2;
    }
    printf("%lld",sum);
}