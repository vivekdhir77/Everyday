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
    int t; cin>>t;
    while(t--)
    {
       ll N;//football
       cin>> N;
       ll M;//cricket
       cin>>M;
        ll football[N];
        ll cricket[M];
        FA(i,0,N)
        {
            cin>>football[i];
        }
        FA(i,0,M)
        {
            cin>>cricket[i];
        }
        int flag=0,count=1;//considering football to be zero
        for (ll i=0, j=0; i<N && j<M ; )//i for foot ball, j for cricket
        {
            if (flag==0)
            {
                if(cricket[j]<football[i])
                {
                    count++;
                    flag=1;
                    j++;
                }
                else
                    i++;
            }
            else if(flag==1)
            {
                if(football[i]<cricket[j])
                {
                    count++;
                    flag=0;
                    i++;
                }
                else
                    j++;
            }
        }
        cout<<count<<"\n";
    }
}