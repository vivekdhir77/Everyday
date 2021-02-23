#include<bits/stdc++.h>
using namespace std;
int main()
{


    /* what i am trying to do is that 
    i am trying to calculate the total no of days from 0001 jan 1 to the input given by user.
    and then will divide it by 7 and then i m able to say which day it is.

    eg; as per net jan 1 0001 is saturday 
      so jan 1 0003 will be monday 
       so from this program i will calculate total no days from jan 1 0001 to jan 1 0003


       YEAR 1000 AND 1100 IS A LEAP YEAR **** SPECIAL CASE ****
       */

    
    
    int y ;
    int m;
    int d;
    cout<<"enter the year: ";
    cin>> y;
    cout <<"enter the month :";
    cin>> m;
    cout << "enter the date : ";
    cin >> d;
    if(y <0 || m > 12 || d >31){
        cout<< " error ";
        
    }else
    {

        // ---------------------------------------- no of days in year ----------------------------------------


        int nor = 0; 

        for(int j=1 ; j< y ; j++){
            if((j%4==0 && j%100!=0) || j%400==0 || j==1000 || j==1100){
                nor = nor + 366;
            }else{
                nor = nor + 365;
            }
        }
        int yday = nor;
        cout<< "day in year = "<< yday << "\n";
        


      // --------------------------------- no of days in a months -------------------------------------------
        int mday;
        if((y%4==0 &  y%100!=0) || y%400==0){
            int mon[]={0, 31 , 60 , 91,121, 152, 182 , 213 ,  244 , 274 , 305 , 335 , 366};
            mday = mon[m-1];
        }else {
            int ddate[]={0 , 31 , 59 , 90 , 120, 151 ,181 , 212 , 243 ,273 ,304 , 334, 365};
            mday = ddate[m-1];

            
            
        }
        int dmday = mday +d;
        cout<< " day + month = " << dmday <<" \n";
        
     // total o of days in giver yr , month , day 

        int days = yday + mday + d ;
        cout<< days << " \n";

        // DIVING WITH 7 AND GIVING THE RESULT :

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
    
}