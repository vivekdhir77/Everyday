#include<stdio.h>
long solution(int);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int N;
    scanf("%d",&N);
    printf("%ld",solution(N));
}
long solution(int N)
{
    long long int num = 1;
    long long int dec=10;
    long long int sum = 0;
 for (int i=1; i<=N; i++)
 {   
    sum += num*i;
    num = num + dec;
    dec= dec *10;}
    return sum;
}