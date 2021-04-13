//https://www.codechef.com/START1C/problems/COUPON2
#include<iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T; cin>> T;
    while(T--)
    { 
        int D, C;
        int a1, a2, a3, b1,b2,b3;
        int day1=0, day2=0;
        int with=0,without=0;
        cin>> D>> C;
        cin>> a1>>a2>>a3;
        day1= a1+a2+a3;
        cin>>b1>>b2>>b3;
        day2= b1+b2+b3;
        if(day1<150 && day2<150){
            cout<<"NO"<<endl;
            continue;
        }
        without= day1+ day2 + D +D;
        if (day2 >= 150 && day1 >= 150)
        {
            with = day1 + day2 + C;
        }
        else if(day1 >= 150)
        {
            with = day2 + D + day1 +C; 
        }
        else if(day2 >= 150)
        {
            with = day1 + D + day2 + C; 
        }
        
        if ( with < without)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}