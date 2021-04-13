//https://codeforces.com/contest/1491/problem/A
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>nos[i];
    ll c0=0,c1=0;
    for(ll i=0;i<n;i++)
    {
        if(nos[i]==1)
            c1++;
        else
            c0++;
    }
    for(ll i=0;i<a;i++)
    {   
        ll t,x;
        cin>>t>>x;
        if(t==1)
        {
            if(nos[x-1]==0)
            {    
                c0--;
                c1++;
            }
            else
            {
                c0++;
                c1--;
            }
        }
        else
        {
            if(x<=c1)
                cout<<"1\n";
            else
                cout<<"0\n";
        }

    }


}   
    
int main()
{

    solve();
    
    return 0;
}