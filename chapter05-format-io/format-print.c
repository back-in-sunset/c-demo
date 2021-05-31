#include<stdio.h>
#include<unistd.h>

void println() {
    printf("+----------------------------------------------------------+\n");
}

void row_flush_print();
void wait_scanf();
void flush_scanf();
void format_print();
void scanf_like_re();

int main() {
    format_print();

    // row_flush_print();
    // wait_scanf();
    // flush_scanf();
    scanf_like_re();
    return 0;
}

void format_print(){
    int a1=20, a2=345, a3=700, a4=22;
    int b1=56720, b2=9999, b3=20098, b4=2;
    int c1=233, c2=205, c3=1, c4=6666;
    int d1=34, d2=0, d3=23, d4=23006783;

    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
    println();

    printf("%9d %9d %9d %9d\n", a1, a2, a3, a4);
    printf("%9d %9d %9d %9d\n", b1, b2, b3, b4);
    printf("%9d %9d %9d %9d\n", c1, c2, c3, c4);
    printf("%9d %9d %9d %9d\n", d1, d2, d3, d4);
    println();
    
}

void row_flush_print(){
    printf("C语言中文网");
    fflush(stdout);
    sleep(5);  // 程序暂停5秒钟
    printf("http://c.biancheng.net\n");
}


void wait_scanf(){
    int a = 1, b = 2;
    char c;

    scanf("a=%d", &a);
    while((c = getchar()) != '\n' && c != EOF); // 在下次读取前清空缓冲区

    scanf("b=%d", &b);
    printf("a=%d, b=%d\n", a, b);
}

void flush_scanf(){
    int n;
    float f;

    scanf("%2d", &n);
    scanf("%*[^\n]");

    scanf("%5f", &f);
    printf("n=%d, f=%g \n", n, f);
}


void scanf_like_re(){
    char str1[30], str2[30];
    scanf("%[^0-9]", str1);
    scanf("%*[^\n]"); scanf("%*c");

    scanf("%[^\n]", str2);
    printf("str1=%s \nstr2=%s\n", str1, str2);
}

