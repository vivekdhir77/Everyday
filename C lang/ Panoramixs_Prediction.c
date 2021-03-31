#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define li long int
#define ll long long int


#include<stdio.h>
int isPrime(int n){
    int count=0, check=1;
    for (int i=2; i<= n/2; i++)
    {
        if (n%i==0)
        check=0;
    }
    return check;
}
int main()
{
    int n, m;
    scanf("%d",&n);
    scanf("%d", &m);
    int num=n+1;
    int next_prime=0;
    while (1 == 1){
        if (isPrime(num)==1) {
            next_prime=num;
            break;
            }
        num+= 1;
    }
    if (next_prime == m)
    printf("YES");
    else
    printf("NO");
}