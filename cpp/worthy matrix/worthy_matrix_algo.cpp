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

        /* displaying */
        cout<<"\n";
        for (int i=0; i<row; i++)
        {
            for (int j=0; j<clmn; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        /* displaying end */

            ll max_order_subMatrix = min(row,clmn);
            for (ll order = 2; order <= max_order_subMatrix; order++) //for the square matrix, 2x2/3x3 etc
                {
                for (ll i=0; i< clmn; i++)
                {
                    
                    for (ll j=0; j< row; j++)
                    {
                            double Sum=0;
                            ll iStart=i, jStart=j, iEnd= i+order-1, jEnd= j+order-1;

                            if (iStart !=0 && jStart!=0)
                                Sum = arr[iEnd][jEnd] - arr[iStart-1][jEnd] - arr[iEnd][jStart-1] + arr[iStart-1][jStart-1];

                            else if (iStart == 0 && jStart !=0)// it can move horixontally
                                Sum = arr[iEnd][jEnd] - arr[iEnd][jStart-1] + arr[iStart-1][jStart-1];

                            else if(iStart != 0 && jStart==0)
                                Sum = arr[iEnd][jEnd] - arr[iStart-1][jEnd] + arr[iStart-1][jStart-1];

                            else if (iStart == 0 && jStart==0)
                                Sum = arr[iEnd][jEnd];


                            double avg =Sum/(order*order);

                            if (avg >=k)
                            count++;
                    }
                }
            }
        cout << count<<"\n";
    }
}