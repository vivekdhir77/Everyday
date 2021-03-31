//http://codeforces.com/problemset/problem/69/A
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
    int n; cin>>n; ll coordinate1=0,coordinate2=0,coordinate3=0;
    while(n--){
        int a, b, c;
        cin>> a >> b >> c;
        coordinate1 += a;
        coordinate2 +=b;
        coordinate3+=c;
    }
    if (coordinate1==0 && coordinate2==0 && coordinate3==0)
    cout<< "YES";
    else
    cout<< "NO";
}