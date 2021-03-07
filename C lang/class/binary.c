#include<stdio.h>
void DEC_to_Bin(long int);//using arrays
void Dec_to_bin_normal(long int);//without using arrays
int main(){
    #ifndef ONLINE_JUDGE
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    long int N;
    scanf("%ld",&N);
    Dec_to_bin_normal(N);
}
void DEC_to_Bin_array(long int dec){
    if (dec!=0)
        {int binary[dec], i=0, j;
        while(dec!=0){
            binary[i] = dec % 2;
            dec = dec / 2; i++;}
        for(j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);}
     else printf("0");
}
void Dec_to_bin_normal(long int dec){
    long int pow=1, binary=0;
    for( ;dec>0 ; dec/=2){
        binary= binary + (pow)*(dec%2);
        pow=pow*10;
    }
    printf("%ld", binary);
}