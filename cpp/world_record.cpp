#include<iostream>
#include<cmath>
using namespace std;

void world_record()
{
    double k1, k2, k3, v;
    cin>>k1>>k2>>k3>>v;
    double a= 100/(k1*k2*k3*v);
    int ans= round(a*100);
    if (ans<958)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        world_record();
    }
}