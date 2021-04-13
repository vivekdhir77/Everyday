#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;
long long int bin_convert(ll n)
{
    ll bin=0;
    while(n!=0)
    {
        bin = bin*10 + n%2 ;
        n=n/2;
    }
    return bin;
}
long long int bin_to_dec_without_zero(ll n)
{
    ll ans=0;
    ll twos=1;
    while(n!=0)
    {
        if (n%10==1)
        {
            ans = ans + (n%10)*twos;
            twos*=2;
        }
        n/=10;
    }
    return ans;
}

int main()
{
    long long int n; scanf("%lld",&n);
    long long int binary = bin_convert(n);
    printf("%lld",bin_to_dec_without_zero(binary));
}