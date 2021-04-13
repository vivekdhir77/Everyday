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
    int n,check=1; cin>>n;
    string s; cin>>s;
    n--;
    int check1=s.length();
    while(n--)
    {
        cin>>s;
        if (check1 <= s.length())
        {
            check1= s.length();
        }
        else
        {
            check=0;
            break;
        }
    }
    if (check==1)
    printf("YES");
    else
    printf("NO");
}
