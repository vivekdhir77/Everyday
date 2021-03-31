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

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int v, u, a,s;
        cin>> u>> v >>a >>s;
        ll v_found= sqrt(u*u-2*a*s);
        if (v_found>= v)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}