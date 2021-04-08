#include<iostream>
#include<cmath>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
typedef long int li;
typedef long long int ll;

using namespace std;


void solve()
{
    int row,clmn,k;
    cin>> row>> clmn>>k;
    int arr[row][clmn];
    int count=0;
    for (int i=0; i<row;i++)
    {
        for (int j=0;j<clmn; j++)
            {
                cin>>arr[i][j];
                if (arr[i][j]>=k)
                count++;
            }
    }
    int N= min(row, clmn);
    if (row == clmn)
    	N=row-1;
    int N_max= max(row,clmn);
    for (int z=2; z<=N;z++)//extracting matrix 2 x 2, 3 x 3, 4 x 4, ...
    {
        for (;;)
        {
        	int C=0, R=0;
        	
        	int sum=0;

        	for(int j=R; j<=(R+z); j++ )
        	{
        		for (int k=C; k<=(C+z); k++)
        		{
        			sum+= arr[j][k];
        		}
        	}
        	sum=sum/(z*z);           
    		if (sum>=k)
            	count++;
            if (C<=(clmn-z))
            	C++;
            if (R<=(row-z))
             	R++;
            if (C==(clmn-z) && R==(row-z))
        		break;
        	    
        }
    }
    cout<<count<<"\n";

}

int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}

// int row_start, row_end, clmn_start, clmn_end;
//                         if (            )
//                         row_start=i, row_end=i+z, clmn_start=i, clmn_end=i+z;
//                         short check;
//                         li sum=0;
//                         for (int i=row_start; i<=row_end; i++)
//                             for (int j=clmn_start; j<=clmn_end; j++)
//                             sum+= arr[i][j];
//                         sum/= (z*z);
//                         //cout<<sum<<"\n";


// short submatrix_sum(int row_start, int row_end, int clmn_start, int clmn_end, int arr[][] ,int k)
// {
//     li sum=0;
//     for (int i=row_start; i<=row_end; i++)
//         for (int j=clmn_start; j<=clmn_end; j++)
//         sum+= arr[i][j];
//     if (sum>=k)
//     return 1;
//     else
//     return 0;
// }