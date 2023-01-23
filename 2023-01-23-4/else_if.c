//shitcode
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number = 0;
    printf("输入一个在%d到%d的数字: ", INT_MIN, INT_MAX);
    scanf("%d", &number);
    if(number > 10)
        printf("你输入的是一个正数\n");
    else if(number == 0)
        printf("你输入的是0\n");
    else if(number < 0)
        printf("你输入的是一个负数\n");
    return 0;
}
