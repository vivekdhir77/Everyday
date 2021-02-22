//https://codeforces.com/contest/1490/problem/A

// not correct
#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;

int maximum(int aj,int ajj)
{
    if (aj > ajj)
        {
            return aj;
        }
    else if (aj < ajj)
        {
            return ajj;
        }
    else
        {
            return aj;
        }
    return 0;
}

int minimum (int aj,int ajj)
{
    if (aj > ajj)
        {
            return ajj;
        }
    else if (aj < ajj)
        {
            return aj;
        }
    else
        {
            return aj;
        }
    return 0;
}

int main()
{
    int T_n, max, min;
    scanf("%d", &T_n);
    for (int i=1; i<= T_n; i++)
    {
        int n; 
        scanf("%d", &n);
        int a[n];
        for (int j=0; j< n ; j++)// accepting array
        {
            cin >>a[j];
            
        }
        for (int j=0; j< n ; j++)// accepting array
        {
            cout << "\n" << a[j]<<"\n";
            
        }
        for (int j=0; j< n-1 ; j++)// a ccepting array
        {   min =0; max=0;
            max = maximum (a[j],a[j+1]);
            min = minimum(a[j],a[j]);
            cout << max <<" "<< min << "\n"; 
        }

    }
}
/*
       1 2 3 4 5 6
index= 0 1 2 3 4 5 
n val= 1 2 3 4 5 6*/
