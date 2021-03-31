#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define li long int
#define ll long long int

int main()
{
    int n;
    scanf("%d",&n);
    char data[n];
    scanf("%s",data);
    int count=0;
    for (int i=0; i<n; i++){
        if (data[i]==data[i+1])
        count++;
    }
    printf("%d",count);
}