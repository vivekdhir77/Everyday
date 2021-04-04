#include<stdio.h>
#define ll long long int
void solve()
{
	ll n, star;
	scanf("%lld %lld",&n,&star);
	char str[1000000];
	scanf("%s",str);
	short check=0;
	for (int i=0; i<=(n-star) ;)
	{
		if (str[i]=='*')
		{
			ll count=0;
			for (int j=i; j<(i+star);j++)
			{
				if (str[j]=='*')
				{
					count++;
				}
				else
				{
					break;
				}
			}
			if (count==star)
			{
				check=1;
				break;
			}
			else
			i+=count;
		}
		else
		i++;
	}
	if (check==1)
		printf("YES\n");
	else
		printf("NO\n");
}


int main()
{
	ll t; scanf("%lld",&t);
	while(t--)
	{
		solve();
	}	
}