// sizeof.c -- 使用 sizeof 运算符
// 使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改成%u或%lu
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n has %zu bytes; all ints have %zd bytes.\n",
           n, sizeof n, intsize);

    return 0;
}
