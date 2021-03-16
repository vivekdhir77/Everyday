//https://www.codechef.com/problems/CIELAB
#include<iostream>
#include<cmath>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define li long int
#define ll long long int

using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll diff=0;
    diff= max(a,b) - min(a,b);
    if (diff%10==0 || diff%10==1)
    diff+=1;
    else
    diff-=1;
    cout<<diff<<endl;
}