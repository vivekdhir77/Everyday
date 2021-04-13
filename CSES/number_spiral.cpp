//https://cses.fi/problemset/task/1071
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
#define ll long long int

using namespace std;
void solve();
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{   
    ll ans_1, ans_2,clmn, row,temp_1, temp_2;
    cin>> clmn >> row;
    
    if (clmn%2==0)
    temp_1= clmn*clmn;
    else
    temp_1= (clmn-1)*(clmn-1)+1;

    ans_1 = temp_1 - (row-1);


    if (row%2!=0)
    temp_2= row*row;
    else
    temp_2= (row-1)*(row-1)+1;

    ans_2 = temp_2 - (clmn-1);

    if (ans_1>ans_2)
    cout<< ans_1<<endl;
    else
    cout<< ans_2<<endl;

}
// #include <iostream>

// using namespace std;

// typedef long long ll;

// int main() {
//   int t, y, x;
//   cin >> t;
//   while (t--) {
//     cin >> y >> x;
//     int a = max(y, x);
//     int b = min(y, x);
//     ll s = ll(a - 1) * (a - 1);
//     if (a == b) s += a;
//     else if (a % 2) {
//       if (x == a) s+= a * 2 - y;
//       else s += x;
//     } else {
//       if (y == a) s += a * 2 - x;
//       else s += y;
//     }
//     cout << s << endl;
//   }
// }