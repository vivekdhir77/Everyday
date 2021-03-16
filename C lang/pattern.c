#include<stdio.h>
int main()
{int n1,n2;
 int counter = 0 ; 
 scanf("%d %d", &n1 , &n2); 
    for (int i = 1 ; i <=n1 ; i++)
        { 
            for (int j =1; j<=n2 ; j++)
            {
                if ( j == n2 )
                {
                    if (j % 2 ==0)
                        printf("1");
                    else 
                        printf("0"); 
                }
                else
                {
                    if (j % 2 ==0)
                        printf("1 ");
                    else
                        printf("0 ");
                }   
            }

                printf("\n"); 
        }
}