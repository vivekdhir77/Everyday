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
    int i, j,n;
    for (i=1; i<=5; i++)
    {
        for (j=1;j<=5; j++){
            scanf("%d",&n);
            if (n==1){
                break;
            }
        }
        if (n==1){
            break;
        }
    }
    int swaps= ((i>3?i:3) - (i>3?3:i)) + ((j>3?j:3) - (j>3?3:j));
    printf("%d", swaps);
}
// condition ? true : false