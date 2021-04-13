// #include<iostream>
// #include<cmath>
// #include<string>
// #include<vector>
// #include<algorithm>
// #define max(a,b) (a>b?a:b)
// #define min(a,b) (a>b?b:a)
// #define FA(i,start,end) for(int i=start; i<end; i++)
// #define FD(i,start,end) for(int i=start; i>=end; i--)
// typedef long int li;
// typedef long long int ll;

// using namespace std;

// // void compute(){
// //     string s;
// //     scanf("%s",&s);
// //     for (int i=0; i< s.length(); i++){
// //         if (s.substr(i, i+5) == "party")
// //         {
// //             printf("pawri");
// //             i+=4;}
// //         else
// //             printf("%hhd",s[i]);
// //     }
// //     printf("\n");


// // }
// void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
// {
//     // Get the first occurrence
//     size_t pos = data.find(toSearch);
//     // Repeat till end is reached
//     while( pos != std::string::npos)
//     {
//         // Replace this occurrence of Sub String
//         data.replace(pos, toSearch.size(), replaceStr);
//         // Get the next occurrence from the current position
//         pos =data.find(toSearch, pos + replaceStr.size());
//     }
// }
// void accepting()
// {
//     std::string data;
//     cin>>data
//     std::cout<<data<<std::endl;
//     findAndReplaceAll(data, "party", "pawri");
//     std::cout<<data<<std::endl;
// }
// int main()
// {
//     int n; scanf("%d",&n);
//     while(n--){
//         accepting();
//     }

// }
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

void findAndReplaceAll(string &data, string toSearch, string replaceStr)
{
    size_t pos = data.find(toSearch);
    while( pos != string::npos)
    {
        data.replace(pos, toSearch.size(), replaceStr);
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}

void accepting()
{
    string data;
    cin>>data;
    findAndReplaceAll(data, "party", "pawri");
    cout<<data<<std::endl;
}
int main()
{
    int n; scanf("%d",&n);
    while(n--){
        accepting();
    }

}