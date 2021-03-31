#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define li long int
#define ll long long int

int distinct(int a[],int n)
{
	int count=0, flag=0;
	for (int i=0; i<n;i++)
	{
		flag=0;
		for (int j=i+1; j<n;j++)
		{
			if (a[i]==a[j])
			{
				flag=1;
			}
		}
		if (flag==0)
		count++;
	}
    return count;
}

int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n;i++)
    scanf("%d",&arr[i]);
    printf("%d",distinct(arr, n));
    
}
