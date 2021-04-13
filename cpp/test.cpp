#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;
using namespace std;

int main()
{
    char a[]={'1','2','3','4','5','6'};
    char *ch= &a[0];
    //int *i=&a[0];
    printf("%p\n",ch);
    printf("%p\n",(++ch));
    printf("%p\n",(++ch));
    //printf("%p",*i<<")\n";



}