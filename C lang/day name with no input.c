#include <stdio.h>
int main()
{
    int n;
    int day;
    printf("day num = ");
    scanf("%d", &n);
    day= n%7;
    if (n<1 && n>365)
    {
        printf("The day number is not within the legal range 1-365");
    }
    else
    {
    switch (day)
    {
        case 1: printf ("friday");
        break;
        case 2: printf ("saturday");
        break;
        case 3: printf ("sunday");
        break;
        case 4: printf ("monday");
        break;
        case 5: printf ("tuesday");
        break;
        case 6: printf ("wednesday");
        break;
        case 0: printf ("thursday");
        break;
    }
    }
    }