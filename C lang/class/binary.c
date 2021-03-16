#include<stdio.h>
struct binary
{
    int bin[3];
}bin;
int DEC_to_Bin_array(long int *dec){
    
    int i=0, j;
    if (*dec!=0)
        {
        while(*dec!=0){
            bin.bin[i] = *dec % 2;
            *dec = *dec / 2; i++;
            printf("%ld\n",*dec);}
        }
    else printf("0");
    return i;
}//using arrays
int main(){   
    long int N;
    scanf("%ld",&N);
    int i = DEC_to_Bin_array(&N);
    for(int j = i - 1; j >= 0; j--)
        printf("%d", bin.bin[j]);
    printf("\n%ld",sizeof(bin.bin));
}

void Dec_to_bin_normal(long int dec){
    long int pow=1, binary=0;
    for( ;dec>0 ; dec/=2){
        binary= binary + (pow)*(dec%2);
        pow=pow*10;
    }
    printf("%ld", binary);
}