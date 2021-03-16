#include<stdio.h>
int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    char st[10000]="\0";
    scanf("%s",&st);
    int x=0;
    for (int i=0; (!(st[i]==0)); i++)
    {   
        if(st[i]>=97 && st[i]<=122)
        {x=1;break;}
    }
    if (x==0) printf("Yes");
    else if (x==1) printf("No");
    //write your code here
}