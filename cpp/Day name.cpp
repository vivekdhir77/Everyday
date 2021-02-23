#include<iostream>
#include<string>

using namespace std;

int leap_yr(int year)
{
    if(((year %4==0 && year %100!=0) || year %400 ==0) || (year == 1100))
    {
        return true;
    }
    else
    {return false;}
    return 0;
}
int main()
{

    int y ;
    int m;
    int d;
    cout<<"enter the year: ";
    cin>> y;
    cout <<"enter the month :";
    cin>> m;
    cout << "enter the date : ";
    cin >> d;
    int days=0;

    days = days + d;
    
    for (int i=1; i < m ; i++)
    {
        if (i == 1 || i== 3 || i== 5 ||  i == 7 || i == 8 || i== 10 || i==12)
        {
            days = days + 31;
        }
        else if (i== 4 || i==6  || i== 9 || i== 11)
        {
            days = days + 30;
        }
        else if ( i == 2)
        { days = days + 28;}
    }
    if (leap_yr(y))
    {
        days = days +1;
    }
    
    cout << "day + month = "<< days <<"  \n";
    
    
    
    int yr = 0;
    for (int i= 1; i< y; i++)
    {
        if (leap_yr(i))
        {
            yr =yr +366;
        }
        else
        {
            yr = yr + 365;
        }
    }
    if (y<1100)
    {
    days = days + yr ;
    }
    else
    {
        days= days +yr +1 ;
    }
    cout<< " total day "<< days << "\n";
    int fin = days % 7;
    cout<< fin << " modlo value \n";
    if(fin==0){
        cout<<"friday\n";
    }else if(fin==1){
        cout<<"saturday\n";
    }else if(fin==2){
        cout<<"sunday\n";
    }else if(fin==3){
        cout<<"monday\n";
    }else if(fin==4){
        cout<<"tuesday\n";
    }else if(fin==5){
        cout<<"wednesday\n";
    }else if(fin==6){
        cout<<"thursday\n";
    }else{
        return 0;
    }

}   
    
