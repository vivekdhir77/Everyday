//https://atcoder.jp/contests/abc197/tasks/abc197_b
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
    int H,W, X , Y ; cin>> H >> W >> X >> Y;
    int rows=H, clmn= W;
    int matrix[H][W];
    for (int i=0; i<rows; i++)//accepting the matrix
    {
        for (int j=0; j<clmn; j++)
        {
            char ch;
            cin>>ch;
            if (ch=='#')//storing # ans 1
            matrix[i][j]=1;
            else if (ch=='.')//storing '.' ans 0
            matrix[i][j]=0;
        }
    }
    int ans=0;--X;--Y;
    if (matrix[X][Y]==0)
        ans=1;
    for (int i=Y+1; matrix[X][i]!=1 && i<clmn; i++)//moving through colum '.' forward
    {
        if (matrix[X][i]!=1)
        ans++;
    }
    for (int i=Y-1; matrix[X][i]!=1 && i>=0; i--)//moving through colum '.' backward
    {
        if (matrix[X][i]!=1)
        ans++;
    }
    for (int i=X-1; matrix[i][Y]!=1 && i>=0; i--)//moving through row '.' backward
    {
        if (matrix[i][Y]!=1)
        ans++;
    }
    for (int i=X+1; matrix[i][Y]!=1 && i<rows; i++)//moving through row '.' forward
    {
        if (matrix[i][Y]!=1)
        ans++;
    }
    cout<<ans;
}