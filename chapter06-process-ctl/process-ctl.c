#include<stdio.h>

void println() {
    printf("-----------------------------------\n");
}


int main() {
    float x = 3e+5, y = 8.0;
    
    float result = x>y ? x:y;

    printf("%f\n", result);
    return 0;
}
