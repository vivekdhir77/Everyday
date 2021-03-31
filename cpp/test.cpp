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

int solve(string X, string Y, int m, int n){
    int largest[m + 1][n + 1];
    int len = 0;
    int row, col;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++) 
        {
            if (i == 0 || j == 0)
                largest[i][j] = 0;
            else if (X[i - 1] == Y[j - 1]) 
            {
                largest[i][j] = largest[i - 1][j - 1] + 1;
                if (len < largest[i][j]) 
                {
                    len = largest[i][j];
                    row = i;
                    col = j;
                }   
            }
            else
                largest[i][j] = 0;
        }
   }
   return len;
}

void solution()
{
    string s1,s2;
    ll len_1, len_2, answer, f_answer;
    cin>>s1;
    cin>>s2;
    len_1 = s1.length();
    len_2 = s2.length();
    answer= solve(s1,s2,len_1,len_2);
    f_answer = (len_1-answer)+(len_2-answer);
    cout<<f_answer<<endl;

}   
    
int main()
{
    ll num;
    cin>>num;
    while(num--)
    {
        solution();
    }
    return 0;
}