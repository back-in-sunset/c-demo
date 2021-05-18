#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>

typedef struct {
    unsigned int nMant : 23;  //尾数部分
    unsigned int nExp : 8;  //指数部分
    unsigned int nSign : 1;  //符号位
}FP_SINGLE;

int myAtoi(char s[]){
    int i, n, sign;

    for(i=0; isspace(s[i]); i++){
        sign=(s[i]=='-')?-1:1;

        if(s[i]=='+' || s[i]=='-')
        i++;

        for(n=0; isdigit(s[i]); i++){
            n=10*n+(s[i]-'0');
        }
    }
    return sign*n;
}

void print_bin(int number){
    int bit = sizeof(int)*8;
    int i;
    for(i = bit - 1;i >= 0;i--){
        int bin = (number & (1 << i)) >> i;
        printf("%d", bin);
    }
    printf("\n");
}

int main() {
    int b = 0B100001;
    int o = 0177777; 
    int h = 0x2A;
    printf("bin:%d, o:%d  h:%d\n", b, o, h);

    // int max = (1<<31)-1;
    // printf("max:%d\n", max);
    
    char strBin[33] = { 0 };
    float f = -19.625;
    FP_SINGLE *p = (FP_SINGLE*)&f;

    // char s[]={'7', '8', '0', '8'};
    // printf("%d\n", myAtoi(s));

    sprintf(strBin, "%d", p->nSign);
    printf("p->nSign: %x\n", p->nSign);

    sprintf(strBin, "%d", p->nExp);
    printf("p->nExp: %x\n", p->nExp);

    sprintf(strBin, "%d", p->nMant);
    printf("p->nMant: %x\n", p->nMant);

    return 0;
}

