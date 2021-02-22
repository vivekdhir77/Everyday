//https://codeforces.com/problemset/problem/133/A
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string s;
    cin >> s;
    bool x = true;
    for (int i=0; i < s.length(); i++)
    {
        if (s.at(i) == 'H')
            {x= false;}
        else if (s.at(i) == 'Q')
            {x= false;}
        else if (s.at(i) == '9')
            {x= false;}
    }
if (x)
    cout<<"NO";
else
    cout<<"YES";

}