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
    int max=1, max_temp=0;
    string DNA;
    cin>>DNA;
    for (int i=0; i< DNA.length()-1;i++)
    {
        if (DNA[i]== DNA[i+1])
            ++max;
        else
        {
            if(max>max_temp){
                max_temp=max;
                max=1;
            }
        }
    }
    cout<<max_temp;
}