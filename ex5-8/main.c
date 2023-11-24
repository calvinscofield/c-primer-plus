#include <stdio.h>

int main()
{
    int n=0;
    size_t intsize;
    intsize=sizeof(int);
    printf("n=%d,n has %zu bytes;all ints have %zd bytes.\n",n,sizeof n,intsize);
    return 0;
}
