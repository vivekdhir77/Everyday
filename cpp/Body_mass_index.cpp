//https://www.codechef.com/CCRC21C/problems/BMI
#include <iostream>
int main()
{
    int n, M, H;
    std::cin>>n;
    for (int i=0; i< n;i++)
    {
        std::cin>> M >> H;
        int wt = M/ (H*H);
        if (wt<=18)
        {
            std::cout<<"1\n";
        }
        else if (wt>18 && wt<=24)
        {
            std::cout<<"2\n";
        }
        else if (wt>24 && wt<=29)
        {
            std::cout<<"3\n";
        }
        else if (wt>=30)
        {
            std::cout<<"4\n";
        }
    }
}
