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
    string data;
    cin>> data;
    int len= data.length();
    int count_captial=0;
    FA(i, 0, len){
        if (data[i] >= 'A' && data[i]<='Z')
        ++count_captial;
    }
    int count_small= len-count_captial ;
    if (count_small >= count_captial)
        FA(i,0,len)
        {
            char ch=tolower(data[i]);
            cout<<ch;
        }
    else if (count_small < count_captial)
        FA(i,0,len)
        {
            char ch=toupper(data[i]);
            cout<<ch;
        }
}