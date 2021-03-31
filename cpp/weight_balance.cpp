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

void solve(){
    ll w1, w2, x1, x2, M; short result=0
    cin>>w1>> w2>>x1>>x2>>M;
    ll wt_mon_l = M * x1;
    ll wt_mon_u = M * x2;
    ll diff= w2-w1;
    else if (diff>= wt_mon_l && diff<= wt_mon_u)
    result=0;
    cout<<result<<endl;
}
int main()
{
    int n; cin>>n;
    while(n--){
        solve()
    }
}