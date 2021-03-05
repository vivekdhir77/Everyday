#include<stdio.h>
void binary_checker(int);
int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int N;
    scanf("%d",&N);
    binary_checker(N);
}
void binary_checker(int N){
    int x=1;
    while(N!=0)
    {if (!((N%10)== 0 || (N%10)==1))
        {x=0;break;}
        N=N/10;}
    printf("%d",x);
}