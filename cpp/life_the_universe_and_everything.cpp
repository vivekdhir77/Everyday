//https://www.codechef.com/problems/TEST
#include <iostream>
int main()
{
    bool x = true;
    int n=0;
    while (x)
    {
        std::cin >> n;
        if (n == 42)
        {
            x = false;
        }
        else if (x)
        {
            std::cout << n <<"\n";

        }
    }
}