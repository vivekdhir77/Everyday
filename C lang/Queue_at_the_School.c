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
    int n, t;
    scanf("%d %d", &n,&t);
    char ch[n];
    scanf("%s", ch);
    while(t--){
        for (int i=0; i<n; i++){
            if (ch[i]=='B' && ch[i+1]=='G'){
                ch[i]='G';
                ch[i+1]='B';
                i+=1;
            }
        }
    }
    for (int i=0; i<n;i++)
    {
        printf("%c",ch[i]);
    }
}