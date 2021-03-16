#include <iostream>
int main()
{
    long long int t,sum=0;
   scanf("%lld",&t);
    while(t--){
        
        long long int num=0;
        scanf("%lld",&num);
        if(num==0)
        {
        sum += num/5;;
        long long int no_copy=sum;
        while (no_copy>=5)
        {
            sum += no_copy/5;
            no_copy /=5;
        }
        }
        cou<<sum<<endl;
    } 
}