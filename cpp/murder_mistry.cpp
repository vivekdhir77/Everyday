#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;

void solve()
{
    string evidence; cin>>evidence;
    string problem; cin>>problem;
    char ch[256]={0};
    for (int i=0; i< evidence.length(); i++)
    {
        ch[evidence[i]]++;
    }
    for (int i=0; i<problem.length();i++)
    {
        if (ch[problem[i]]>0)
        ch[problem[i]]--;
    }
    short check=1;
    for (int i=0; i<256; i++)
    {
        if (ch[i]!=0)
        {
            check=0;
            break;
        }
    }
    if (check==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}