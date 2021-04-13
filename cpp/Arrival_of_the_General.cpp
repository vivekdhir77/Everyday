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
    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int max=0, min=0, max_ele= arr[0], min_ele = arr[0];
    for (int i=0; i<n;i++)
    {
        if (arr[i]<=min_ele)
            min= i;
        if (arr[i]>max_ele)
            max = i; 
    }
    int swaps=0;
    // printf("%d\n",min);
    // printf("%d\n",max);
    if (min<max)
    swaps = (n-min-1) + (max-1);
    else if(min==(n-1) && max==0)
    swaps=0;
    else
    swaps = (n-min) + (max);
    printf("%d",swaps);
}