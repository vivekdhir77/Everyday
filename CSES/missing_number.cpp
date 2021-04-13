#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;
void bitwise_missing_number();
void math_bitwise_missing();
int main()
{
    //bitwise_missing_number();
    math_bitwise_missing();
}
void bitwise_missing_number(){
    int n; cin>>n;
    int ar[n];int a=0,b=0;
    FA(i,0,n-1)
    {
        cin>>ar[i];
        a^=ar[i];
        b^=(i+1);
    }
    b^=n;
    b=b^a;
    cout<<b;
}
void math_bitwise_missing(){
    li n; cin>>n;
    li ar[n-1];
    li a=(n*(n+1))/2,sum=0;
    FA(i,0,n-1)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<(a-sum);
    }