#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
//#define abs(inp) (inp<0?inp*-1:inp)
typedef long int li;
typedef long long int ll;

using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    cin>>a[i];
    int min = abs(a[0]-a[1]);
    int ele1 = a[0], ele2= a[1];
    for (int i=0; i< n;i++)
    {
        if (abs(a[i]-a[i+1]) <  min || a[i]==a[i+1])
        {
            min= abs(a[i]-a[i+1]);
            ele1= a[i];
            ele2=a[i+1];
            if (a[i]==a[i+1])
            break;
        }
    }
    cout<<(ele1^ele2);
}