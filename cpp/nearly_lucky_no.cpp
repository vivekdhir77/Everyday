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
    ll n,check=0;
    cin>>n;
    while(n!=0){
        int rem= n%10;
        if (rem ==7 || rem ==4 )
            check++;
        n/=10;
    }
    if ((check == 7 || check== 4))
    cout<<"YES";
    else
    cout<<"NO";
}