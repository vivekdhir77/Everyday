//https://www.codechef.com/LTIME93C/problems/DIV03
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
    ll a[10],n[10];
    
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        n[i]=i+1;
    }
    ll k;
    cin>>k;
    int max=0;
    for(int i=9;i>=0;i--)
    {
        if(k>=a[i])
            k-=a[i];
        else{
            max = n[i];
            break;
        }

    }
    cout<<max<<endl;


}   
    
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
