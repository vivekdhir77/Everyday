//https://cses.fi/problemset/task/1094

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
ll solution(ll);
int main()
{
    ll N;
    scanf("%lld",&N);
    printf("%lld",solution(N));
}
ll solution(ll N)
{ 
    ll Array[N],count=0;
    scanf("%lld",&Array[0]);
    {
    for (int i=1; i<N;i++)
        {
        scanf("%lld",&Array[i]);
        ll diff=0;
        diff= Array[i]-Array[i-1];
        if (diff>=0)
            continue;
        else 
        {
            count-=diff;
            Array[i]=Array[i-1];}
        }
    return count;
    }
}