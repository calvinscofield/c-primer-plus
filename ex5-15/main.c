#include <stdio.h>

void pound(int n); // ANSI函数原型声明

int main()
{
    int times=5;
    char ch='!'; // ASCII码是33
    float f=6.0f;
    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n)
{
    while(n-->0)
        printf("#");
    printf("\n");
}
