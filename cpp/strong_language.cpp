#include<iostream>
#include<string>
using namespace std;

void strong_lang()
{
    int N,K;
    string s;
    cin>>N>>K;
    cin>>s;
    string star="";
    for (int i=0; i<K;i++)
    star.push_back('*');
    int pos = s.find(star);
    if (pos != string::npos)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        strong_lang();
    }
}