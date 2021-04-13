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

int check_repetitions(int n){
    
    int check=0;//assuming repetitions are not there
    int num[10]={0}; // num [] = {2,0,2,0,0 ,0 ,0 ,0 ,0 ,0}     //2002
    // n= 0
    while(n!=0)
    {
        num[n%10]++;
        n/=10;
    }
    for (int i=0; i<10; i++){
        if (num[i]>1) 
        check = 1;// encountered repetition so changing assumption
    }
    return check;
}

int main()
{
    int year; cin>>year;
    year++;
    while(check_repetitions(year))
        year+=1;
    cout<<year;
}