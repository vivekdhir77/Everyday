#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for (int i=0; i<n-1 ;i++)
        {
            if (arr[i]==arr[i+1] || (arr[i]==arr[n]&&arr[i]==arr[i-1]))
            {
                cout<<"1 1 ";
                i+=1;
            }
            else if (arr[i]!=arr[i+1])
                cout<<"0 ";
        }
        cout<<"\n";
	    
	}
	return 0;
}