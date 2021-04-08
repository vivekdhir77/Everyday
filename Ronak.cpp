#include <iostream>

using namespace std;

typedef long long int ll;


int main()
{
    ll t;

    cin >> t;
    for(ll q = 1 ; q<=t ;q++)
    {
        ll n,m,k;

        cin >> n >> m >> k;

        double a[n+1][m+1];

        ll count = 0;

        for(ll i = 0 ; i <= n; i++)
        {
            for(ll j = 0;j <= m; j++)
            {
                if(i==0 || j==0)
                {
                   a[i][j] = 0;
                }
                else
                {
                    cin >> a[i][j];
                    if (a[i][j]>=k)
                        count++;
                }
            }
        }


        for(ll i = 0; i <= n; i++)
        {
            double prev = 0;
            for(ll j = 0; j <=m; j++)
            {
                a[i][j] += prev;
                prev = a[i][j];
            }
        }


        for(ll j = 0;j <= m; j++)
        {
            double prev=0;
            for(ll i = 0;i <= n; i++)
            {
                a[i][j] += prev;
                prev = a[i][j];
            }
        }




        for(ll order =1; order <= min(n,m); order++)
        {
            for(ll i = order;i <= n; i++)
            {
                for(ll j = order; j<= m; j++)
                {
                    if((a[i][j]+a[i-order][j-order]-a[i][j-order]-a[i-order][j])/(order*order)>=k)
                    {
                        count += m - j + 1;
                        break;
                    }
                }
            }

        }
        cout << count  << endl;
    }
}


1 2 3
4 5 6
7 8 9


0 0 0 0
0 1 3 6
0 5 12 18
0 12 23 42








//##################################################




ll auxillary(ll row,ll clmn, ll k)
{
    ll sum_row=0;
    ll sum_clmn=0;
    ll Count=0;
    for (ll i=0; i<row; i++)
    {
        for (ll j=0; j<clmn; j++)
        {
            
            cin>>arr[i][j];
            if (arr[i][j]>=k)
            Count++;
            
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
    return Count;
    //display(row, clmn);
}




