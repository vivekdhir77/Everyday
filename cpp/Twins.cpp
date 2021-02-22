//https://codeforces.com/problemset/problem/160/A
#include <iostream>
#include <cmath>
#include <cstdio>
#include <string.h>
#define ll long long int

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int nos[n];
    for(int i=0;i<n;i++)
        cin>>nos[i];
    
    sort(nos,nos + n);
    ll sum=0;
    for(int i=0;i<n;i++)
        sum+= nos[i];
    ll count=0;
    ll temp=0;
    for(int i=n-1;i>=0;i--)
    {
        temp+=nos[i];
        count++;
        sum-=nos[i];
        if(temp>sum)
            break;
    }
    cout<<count<<endl;
    return 0;
}