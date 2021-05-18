#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void println(){
    printf("-------------------------------------------");
    printf("\n");
}

int main()
{
    puts("C语言中文网");
    printf("http://c.biancheng.net\n");

    wchar_t c = L'中';
    putwchar(c);
    putwchar(L'\n');

    wprintf(L"c is %s\n", c);
    printf("c size is %ld\n", sizeof(c));


    int i = *(int*)"参";
    printf("%d\n", i);
    println();

    int cap = 'a'-'A';
    char a = '\61'; 
    char b = '\141';
    char z = '\141';
    
    printf("a->%c,\t b->%c,\t cap->%d\n", a, b, cap);
    printf("z->%c\n", z-cap);
    println();

    char *str1 = "\x31\x32\x33\x61\x62\x63";
    printf("%s\n", str1);
    println();


    puts("http://c.biancheng.net");
    printf("C语言中文网\n");

    return 0;
}

