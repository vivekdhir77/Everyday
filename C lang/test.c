#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10]={'1','2','3','\0','5','6'};
    printf("using sizeof() %lu\n",sizeof(ch)/sizeof(char));
    printf("using strlen() %lu\n",strlen(ch));
}

//output:
//using sizeof() 10
//using strlen() 3