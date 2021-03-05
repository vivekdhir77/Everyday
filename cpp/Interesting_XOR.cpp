#include<iostream>
void DEC_to_Bin(long int);
int main(){
    long int N;
    scanf("%ld",&N);
    DEC_to_Bin(N);
}
void DEC_to_Bin(long int dec){
    if (dec!=0)
        {int binary[dec], i=0, j;
        while(dec!=0)
        {
            binary[i] = dec % 2;
            dec = dec / 2; i++;
        }
        for(j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);}
     else printf("0");
}