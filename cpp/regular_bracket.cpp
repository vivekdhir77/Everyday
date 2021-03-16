#include<iostream>
#include<string>


void reg_brac(std::string bracket)
{
    int sum=0;
    for (int i=0; i < bracket.length();i++)
        {
        if (bracket[i] == "(")   sum += 1;
        
        else   sum -= 1;
        if (sum < 0)
            {
            std::cout<<("NO");
            break;
            }
        }
    if (sum == 0) std::cout<<("YES");
    else if (sum > 0) std::cout<<("NO");}

int main(){
    int t; std::cin >> t;
    while(t--){
        std::string s; std::cin>> s;
        int a=0,b=0,c=0;
        std::string other ;
        if (s[0] == s[s.length()-1])
        {
            std::cout<<"NO";
            continue;
        }
        for(int i=0; i<s.length(); i++)
        {
            if (s[i]==s[0]) a+=1;
            else if (s[i] == s[s.length()-1]) c+=1;
            else {b+=1; other= s[i];}
        }
        int case1= a+b-c;
        int case2= a-b-c;
        std::string brac= "";
        if (case1 == 0)
        {
            for (int i=0; i< s.length(); i++){
                if (s[i]==s[0] || s[i] == other) brac+= '(';
                else brac+=')';}
            reg_brac(brac);
        }
        else if (case2 == 0)
        {
            for (int i=0; i< s.length(); i++){
                if (s[i] == s[0])
                    brac+= '(';
                else
                    brac+=')';}
            reg_brac(brac);
        }
        else{
            std::cout<<"NO";
            continue;
        }

    }//while
}//