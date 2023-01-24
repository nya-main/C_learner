//shitcode
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number = 0;
    int win_number = 777;
    printf("输入你的数字(1-10): ");
    scanf("%d", &number);
    if(!(number > 1 && number < 10))
        number = 11;
    switch(number)
    {
        case 7:
            printf("你中了一等奖!\n");
            break;
        case 6:
            printf("你中了二等奖!\n");
            break;
        case 5:
            printf("你中了三等奖!\n");
            break;
        case 11:
            printf("你为什么要输一个不符合规定的数qwq...\n");
        default:
            printf("好可惜...你没中奖qwq...\n");
            break;
    }
    return 0;
}
