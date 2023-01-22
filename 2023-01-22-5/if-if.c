#include <stdio.h>
#include <limits.h>

int main(void)
{
    long test = 0L;
    printf("输入比 %ld 小的数", LONG_MAX);
    scanf("%ld", &test);
    if (test % 2L == 0L)
    {
        printf("%ld是一个偶数\n", test);
        if ( (test / 2) % 2L == 0L )
        {
            printf("%ld的一半还是一个偶数!\n", test);
        }
        else
        printf("%ld的一半不是一个偶数哦\n", test);
    }
    else
        printf("你输的不是一个偶数\n");
    return 0;
}
