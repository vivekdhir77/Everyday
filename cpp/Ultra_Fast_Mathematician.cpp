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
    string n1; cin>>n1;
    string n2; cin>>n2;
    int len= n1.length();
    char new_N[len];
    FA(i,0, len) new_N[i]=0;
    FA(i, 0, len){
        if (n1[i]!=n2[i])
            new_N[i]=1;
    }
    FA(i, 0, len) printf("%d",new_N[i]);  
}