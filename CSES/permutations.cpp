//https://cses.fi/problemset/task/1070
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; --i)
typedef long int li;
typedef long long int ll;

using namespace std;

int main()
{
    ll n; cin>>n;
    if (n==1) cout<<"1";
    else if (n>3)
    {
        for(int i=2; i<=n;){//printing even numbers
            cout<<i<<" ";
            i+=2;
        }
        for(int i=1; i<=n;){//printing odd numbers
            if (i%2==1)
            cout<<i<<" ";
            i+=2;
        }
    }
    else cout<<"NO SOLUTION";
}