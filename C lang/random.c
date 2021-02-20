#include <stdio.h>
int  main () 
{
    int  n ;  //no .  pages  in  a book
    float  R;  // price  of  the  book
    scanf("%d",&n);
    scanf("%f",&R);
    float num = ((4/3)*(3.14)*(R*R*R))/n;
    printf ( "Volume of small sphere %f"  , num) ;
    return  0;
}