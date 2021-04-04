#include<iostream>
#define ll long long int
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	ll stacks= (n/4);
	ll pip=0;
	ll top_stack;

	top_stack = n%4;

	if (stacks>=1)
	pip = stacks*((6+5)*4);
	
	if (top_stack==1)
		{
			pip += 20;
			if (stacks>=1)
			pip += 12;
		}
	else if (top_stack==2)
		{
			pip+=36;
			if (stacks>=1)
			pip+=8;
		}
	else if (top_stack==3)
		{
			pip+=51;
			if (stacks>=1)
			pip+=4;
		}
	else if (top_stack==0)
		{
			pip+=0;
			if (stacks>=1)
			pip+=16;
		} 
		cout<<pip<<"\n";
}

int main()
{
	ll t; cin>>t;
	while (t--)
	{
		solve();
	}
}