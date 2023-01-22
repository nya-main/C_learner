#include <stdio.h>
int main(void)
{
    int NUM = 111;
    printf("初始NUM: %d\n", NUM);
    NUM %= 111;
    printf("取模111: %d\n", NUM);
    return 0;
}
