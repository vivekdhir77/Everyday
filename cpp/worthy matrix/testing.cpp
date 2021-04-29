#include<iostream>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
typedef long long int ll;

using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll row, clmn,k;
        cin >> row >> clmn >> k;
        ll arr[row][clmn];
        ll sum_row=0;
        ll sum_clmn=0;
        ll count=0;
        for (ll i=0; i<row; i++)
        {
            for (ll j=0; j<clmn; j++)
            {
                
                cin>>arr[i][j];
                if (arr[i][j]>=k)
                count++;
                
                if (i==0)
                sum_row += arr[i][j];
                if (j==0)
                sum_clmn += arr[i][j];
                
                if (i==0)
                arr[i][j] = sum_row;
                if (j==0)
                arr[i][j]= sum_clmn;

                if (i!=0 && j!=0)
                arr[i][j]= arr[i][j] + (arr[i-1][j]-arr[i-1][j-1])/* removing excess addition */ + arr[i][j-1];
            }
        }

        for(ll order = 2; order <= min(row,clmn); order++)
        {
            for(ll i = order;i <= row; i++)
            {
                for(ll j = order; j<= clmn; j++)
                {
                    if((arr[i][j]+arr[i-order][j-order]-arr[i][j-order]-arr[i-order][j])/(order*order)>=k)
                    {
                        count += clmn - j + 1;
                        break;
                    }
                }
            }

        }
        cout << count  << endl;
    }
}