#include<stdio.h>

void println();

int main(){
    int a = 12;
    int b = 100;
    float c = 8.5;


    int m = a + b;
    float n = b * c;
    double p = a / c;
    int q = b % a;

    float f = 2.8;
    int i = f;
    printf("m=%d, n=%.2f, p=%lf, q=%d, i=%d\n", m, n, p, q, i);
    println();   

    int sa, sb;
    scanf("%d %d", &sa, &sb);
    printf("result=%d\n", sa/sb);

    return 0;
}


void println() {
    printf("------------------------------\n");
}
