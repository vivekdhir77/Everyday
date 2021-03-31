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
        int N, M;
        cin>>N>>M;
        int temp;
        int freqArr[M];
        for (int i=0; i<M+1;i++)
            freqArr[i]=0;
        for (int i=0; i<N; i++)
        {
            cin>>temp;
            freqArr[temp]++;
        }
        int count=0;
        for (int i=1; i<M+1;i++)
        {
            if (freqArr[i]==0)
                count=1;
        }
        if (count==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}