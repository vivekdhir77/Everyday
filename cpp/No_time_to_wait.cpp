#include<iostream>
using namespace std;
int main()
{
    int N, H, x;
    int req;
    scanf("%d %d %d",&N,&H,&x);
    int T[N];
    for (int i=0; i<N;i++)
    {
        cin>>T[i];
    }
    req = H - x; 
    for(int i=0; i<N;i++)
    {
        if (T[i] >= req)
        {
            printf("YES\n");
        }
    }
}