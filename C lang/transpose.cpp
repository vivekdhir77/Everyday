#include <iostream>
using namespace std;

int main(){
	int rows;
	scanf("%d", &rows);              			// Reading input from STDIN
	int clmn;
	scanf("%d", &clmn);
	int arr[rows][clmn];
	for(int i=0; i<rows; i++)
    {
        for(int j=0; j<clmn; j++)
        {
        	cin>>arr[i][j];
        }
    }
	for(int i=0; i<clmn; i++)
    {
        for(int j=0; j<rows; j++)
        {
        	cout<<arr[j][i]<<" ";
        }
		cout<<"\n";
    }
  // Writing output to STDOUT
}