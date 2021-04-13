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
    int max=1, max_temp=1;
    string DNA;
    cin>>DNA;
    char c=DNA[0];
    for (int i=1; i<= DNA.length();i++)
    {
        if (DNA[i]== c)
            max++;
        else if (DNA[i]!= c || DNA.length()==i)
        {
            if(max > max_temp){
                max_temp=max;
            }
            c=DNA[i];
            max=1;
        }
    }
    cout<<max_temp;
}