#include<iostream>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define li long int
#define ll long long int
using namespace std;
int main()
{
    ll t=0;
   scanf("%lld",&t);
    while(t--){
        ll t,sum=0, num=0;
        scanf("%lld",&num);
        sum += num/5;;
        ll no_copy=sum;
        while (no_copy>=5)
        {
            sum += no_copy/5;
            no_copy /=5;
        }
        cout<<sum<<endl;
    } 
}