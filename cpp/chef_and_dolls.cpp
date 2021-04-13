//https://www.codechef.com/problems/MISSP
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
void compute(int);
int main()
{
    int t; cin>>t;
    compute(t);
    

}
void compute(int t)
{
    while (t--){
        ll num,unpair=0;cin>>num;
        while (num--)
        {
            int doll; cin>>doll;
            unpair^=doll;
        }
        cout<<unpair<<endl;
    }
}