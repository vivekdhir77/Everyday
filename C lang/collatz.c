/*#include<stdio.h>
typedef long long int ll;
ll collatz(ll);
int main()
{
     ll n=0;
    scanf("%lld",&n);
    printf("%lld",collatz(n));
}
ll collatz(ll n)
{
    ll c=0;
    if(n==1) return c;
    else if (n%2==0) {
        return collatz(n/2);
        c++;
        }
        else {
            return collatz(3*n+1);
            c++;
        }
}*/
#include<stdio.h>
typedef long long int ll;
int main()
{
    ll n=42,c=1;
    scanf("%lld",&n);
    while(n!=1)
    {
        if (n%2==0) 
        {
            n=n/2;
            c++;
        }
        else {
            n=3*n+1;
            c++;
        }
    }
    printf("%lld",c);
}