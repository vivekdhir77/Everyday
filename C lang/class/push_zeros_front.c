#include<stdio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

int main()
{
    ll n, last=0;
    scanf("%lld",&n);
    ll ar[n];
    FA(i,0,n){
        scanf("%lld",&ar[i]);
        if (ar[i]==0) printf("0 ");
        if (ar[i]!=0) last=i;
    }
    FA(i,0,n){
        if (ar[i]!=0){
            if (i!=last) printf("%lld ",ar[i]);
            else printf("%lld", ar[i]);
        }
    }
    

}