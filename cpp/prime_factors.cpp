#include<iostream>

using std::cout;

int prime_no(int num)
{
    int count=0;
    for(int i=2; i<= num/2; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout << num<<" ";
    }
    return 0;

}

int prime_factors(int no)
{
    for(int i=2; i<= no/2; i++)
    {   
        
        if(no%i==0)
        {
            prime_no(i);
        }
    }
return 0;
}

int main()
{   
    int n;
    std::cin >> n;
    prime_factors(n);
    return 0;
}