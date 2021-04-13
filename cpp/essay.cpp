//http://www.usaco.org/index.php?page=viewproblem2&cpid=987
#include<iostream>
#include<string.h>
using std::cin;
using std::cout;
int main()
{
    int n, k;
    cin >> n >> k;
    std::string str[n];
    for (int i=0; i< n ; i++)// accepting array
    {
        cin >>str[i];
    }

    std::string word;
    int sum;
    std::string line;
    for (int j=0; j<= n ; j++)
            {   
                sum = sum + str[j].length();
                word = word + (str[j]+" ");
                if (sum >= k)// braking the string into line based on k
                {
                    if (sum > k)// if the line > k letters
                    {
                        word = word.erase(word.find(str[j]));
                        line = word;
                        cout<<line<<"\n";
                        word=str[j]+' ';
                        sum=str[j].length();
                    }
                    else if (sum == k)// if the line == k letters
                    {
                        line = word;
                        cout <<line<<"\n";
                        word="";
                        sum=0;
                    }
                }
            }
    return 0;
}