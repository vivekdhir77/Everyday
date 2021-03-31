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

void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count=1;
    ll start=-1;
    ll end=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            if(start==-1)
            {
                start=i;
            }
            end=i;
        }
        
    }
    
    for(ll i=start;i<end;)
    {
        if(s[i]=='*')
            count++;
        if(i+k>=end)
        {
            break;
        }
        for(ll j=i+k;j>=i;j--)
        {
            if(s[j]=='*')
            {
                i=j;
                break;
            }
        }
        
    }
    
    cout<<count<<endl;



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