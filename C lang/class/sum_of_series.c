#include<stdio.h>
int factorial(int);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int N;
    scanf("%d",&N);
    double sum=0;
    for (double i=1; i<=N;i++)
    {
        sum+= i/factorial(i);
    }
    printf("%.3lf",sum);
}
int factorial(int N)
{
    long long int fact=1, i=1;
    for (;i<=N;i++ )
    {fact*=i;
    }
    return fact;
}