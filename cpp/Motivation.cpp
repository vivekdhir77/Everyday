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
    while(t--){
        int n,x; cin>>n>>x;
        int space[n], rating[n];
        int final_s=0, final_r=0;
        for (int i=0; i<n; i++)//accepting rating and space
        {
            cin>>space[i]>>rating[i];
            if (space[i]<=x && final_r<=rating[i])//checking for the movie which can be stored
            {
                final_s=space[i];
                final_r=rating[i];//we can get max IMDB for required space
            }
        }
        cout<<final_r<<endl;//since the array is sorted in decreasing order
    }//while end
}