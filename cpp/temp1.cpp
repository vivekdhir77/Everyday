#include<iostream>

using namespace std;
int Dec_to_bin_normal(long int);
int main()
{   
    /*#ifndef ONLINE_JUDGE 
    freopen("inp.txt",'r',stdin);
    freopen("out.txt",'w',stdout);
    #endif */
    int T=0;cin>>T;
    while(T--)
    {
    long int n=0, bin_n=0;
    cin>> n;
    bin_n = Dec_to_bin_normal(n);
    int a[n],b[n], num=0,i=0 ;
    for (;bin_n>0;)
    { 
        int num = bin_n;
        if ((bin_n%10)==0)
        {
            a[i] = 1;
            b[i] = 1; 
        }
        if ((num/10) == 0 )
        {
            if ((bin_n%10)==1)
            {
                a[i] = 1;
                b[i] = 0; 
            }
        }
        else
        {
            if ((bin_n%10)==1)
            {
                a[i] = 0;
                b[i] = 1; 
            }
        }
        i++; 
        bin_n/=10;
    }
    long int num1=0, num2 =0, pow1=1;
    for (int j = 0; j<=(i-1);j++)
    {   
        num1+=a[j]*pow1;
        num2+=b[j]*pow1;
        pow1*=2;
    }
    cout<< (num1*num2)<<endl;
    }
}



int Dec_to_bin_normal(long int dec){
    long int pow=1, binary=0;
    for( ;dec>0 ; dec/=2){
        binary= binary + (pow)*(dec%2);
        pow=pow*10;
    }
    return binary;
}