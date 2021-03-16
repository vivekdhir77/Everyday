//https://www.codechef.com/problems/HORSES
/*#include<iostream>
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
        ll a[n];
        cin>> a[0];
        ll min1 = a[0], min2 = 10000000;
        for(int i=1; i<n; i++)
            {   
                cin>> a[i];
                if (a[i]<min1)
                    min1 = a[i];
                if (a[i]<min2 && a[i]!=min1)
                    min2 = a[i];
            }
        cout<<min1<<endl;
        cout<<min2<<endl;
        cout<< (min2-min1)<<endl;        
    }
}*/
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
        ll a[n];
        cin>> a[0];
        ll min1 = a[0], min2 = a[0];
        if (n>1)
        {
            int j=1;
            while(min2==min1)
            {
                min2= a[j];
                j++;
            }
        }
        for(int i=1; i<n; i++)
            {   
                cin>> a[i];
                if (a[i]<min1)
                    min1 = a[i];
                if (a[i]<min2 && a[i]!=min1)
                    min2 = a[i];
            }
        if (min2>min1)
        cout<< (min2-min1)<<endl;  
        else
        cout<< (min1-min2)<<endl;   
    }
}