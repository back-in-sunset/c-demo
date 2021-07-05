#include<stdio.h>
#include<string.h>

void println() {
    printf("-----------------------------------\n");
}
int find();

void printAtoZ() {
    char str[30];
    char c;
    int i;
    for(c=65, i=0; c<=100; c++, i++) {
        str[i] = c;
    }
    printf("%s\n", str);

}

void strArray(){
    char a1[10];
    char b1[5];
    char c1[20] = {'c', ' ', 'p', 'r', 'o', 'g', 'r', 'a','m'};
    char d[] = {'c', ' ', 'p', 'r', 'o', 'g', 'r', 'a', 'm' };
   
    a1[0] = 'A';
    b1[4] = 0;
//    b1[0]='a';
//    char* a = (char*)a1;
//    char* b = (char*)b1;
    printf("s:%s  len:%ld\n", a1, strlen(a1));
    printf("s:%s  len:%ld\n", b1, strlen(b1));
    printf("%s   len:%ld\n", c1, strlen(c1));
    printf("%s   len:%ld\n", d, strlen(d));
}

int main() {
    int a[4] = {0};
    printf("%ld\n", sizeof(a));


    for(int i=0; i<4; i++){
        printf("a[%d] : %d\n",i, a[i] );
    }

    long x = a[3];
    printf("%ld\n", x);

//    int a[5][3]={ {80,75,92}, {61,65,71}, {59,63,70}, {85,87,90}, {76,77,85} };
//    find();
    println();
    strArray();

    printAtoZ();
    return 0;
}

int find() {
//    int nums[10] = {0, 1, 6, 10, 23, 34, 100, 177, 296, 999};
    int i = 0;
    int num = 0;
    int thisindex = -1;
    printf("%d, %d, %d\n", i, num, thisindex);
    printf("Input an integer: ");

    return -1;
}
