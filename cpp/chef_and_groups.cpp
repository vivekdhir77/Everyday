#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T; cin>>T;

    while(T--)
    {
        string s; cin >> s;
        int n = s.length(), grp=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1' && s[i+1]=='1') continue;
            else if (s[i]=='1') grp+=1;
        }
        cout << grp<< endl;
    }
}
