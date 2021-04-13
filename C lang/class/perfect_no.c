#include<stdio.h>
int solution(long long int);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    long long int N;
    scanf("%lld",&N);
    printf("%d",solution(N));
}
int solution(long long int N)
{
   long long int sum=0;
    for (long long int i=1; i<= ((N+1)/2); i++)
    {
     if (N%i==0) sum+=i;
    }
    if (sum == N) return 1;
    else return 0;
    
}