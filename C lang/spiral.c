#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define li long int
#define ll long long int

void solve();
int main()
{
    ll t; scanf(t;
    while(t--)
    {
        solve();
    }
}
void solve()
{   
    ll ans_1, ans_2,clmn, row,temp_1, temp_2;
    scanf("%llu"clmn >> row;
    
    if (clmn%2==0)
    temp_1= clmn*clmn;
    else
    temp_1= (clmn-1)*(clmn-1)+1;

    ans_1 = temp_1 - (row-1);


    if (row%2!=0)
    temp_2= row*row;
    else
    temp_2= (row-1)*(row-1)+1;
    ans_2 = temp_2 - (clmn-1);

    if (ans_1>ans_2)
    cout<< ans_1<<endl;
    else
    cout<< ans_2<<endl;
}