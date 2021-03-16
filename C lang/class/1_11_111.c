#include<stdio.h>
struct series
{
    int length;
    int ser[6];
};
void solution(int N)
{
    struct series seres;
    long long int num = 1;
    long long int dec=10;
    long long int sum = 0;
 for (int i=1; i<=N; i++)
 {   
    
    sum += num*i;
    seres.ser[i-1] = num;
    num = num + dec;
    
    dec= dec *10;
    printf("%d\n",seres.ser[i-1]);
    }
    printf("%lld\n",sum);
}

int main()
{
    struct series l;
    int N;
    scanf("%d",&N);
    l.length = N;
    solution(N);
}
