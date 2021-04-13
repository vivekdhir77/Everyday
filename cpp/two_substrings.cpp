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
    string str;
    cin>> str;
    ll len = str.length();
    int posAB= str.find("AB");
    int posBA= str.find("BA");
    cout<<posAB<<endl;
    cout<<posBA<<endl;
    short check=0;
    while(1)
    {
        if ( (posAB != -1) && (posBA != -1) && ((posAB+1)!=posBA) )
            {
                cout<<"YES";
                check=1;
                break;
            }
        if ((posAB == -1 || posBA == -1))
            break;
        posAB = str.find("AB", (posAB + 2));
        posBA = str.find("BA", (posBA + 2));
    }
    if (check==0)
    cout<<"NO";
}