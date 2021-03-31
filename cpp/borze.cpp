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

void ChangeOccurances(string Replace_Str, string InitStr, string &data){
int pos = data.find(InitStr);
while(pos!= string::npos){
    data.replace(pos, InitStr.size(),  Replace_Str);
    pos = data.find(InitStr, pos + Replace_Str.size());
    }
}

int main()
{
    string str;
    cin>>str;
    ChangeOccurances("2","--",str);
    ChangeOccurances( "1","-.", str);
    ChangeOccurances("0","." , str);
    cout<<str;
}