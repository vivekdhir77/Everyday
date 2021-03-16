#include<stdio.h>
#include<string.h>
int main()
{
    char st[10000];
    scanf("%s",st);
    int len= strlen(st);
    int num=len/2;
    int flag=1;
    for (int i=0; i< num ; i++ )
    {
        if (st[i]!=st[--len])
        {
            flag=0;
        }
    }
    printf("%d",flag);
    
}