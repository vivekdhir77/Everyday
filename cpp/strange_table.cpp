//https://codeforces.com/contest/1506/problem/A
/*
from math import ceil
for _ in range(int(input())):
    n,m,no=input().split()
    x = ceil(float(no)/int(n))//x,y are coordinates in table
    n=int(n)
    m=int(m)
    no=int(no)
    y = n-(n*x-no)
    ans = (y-1)*m+x
    print(ans)
*/
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
    int n; cin>>n;
    while(n--){
        unsigned long long int n,m,y,ans,x;
        double no;
        scanf("%lld %lld %lf",&n, &m, &no);
        x = ceil(no/n);
        y = (int) (n-(n*x-no));
        ans = (y-1)*m+x;
        cout<<ans<<endl;
    }
}