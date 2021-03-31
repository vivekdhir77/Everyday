//https://www.codechef.com/problems/HORSES
#include<iostream>
#include<cmath>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define li long int
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],diff;
        for(int i=0; i<n; i++)
            {   
                cin>> a[i];
            }
        diff= max(a[1],a[0])-min(a[1],a[0]);
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                int temp_diff= max(a[i],a[j])- min(a[i],a[j]);
                if (diff> temp_diff)
                {
                    int temp = temp_diff;
                    temp_diff= diff;
                    diff= temp;
                }
            }
        }
        cout<< diff<<endl;        
    }
}