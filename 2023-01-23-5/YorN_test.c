//shitcode
#include <stdio.h>

int main(void)        {
    char answer = 0;
    printf("确定? [Y|N]");
    scanf("%c", &answer);
    switch (answer) {
        case 'y':case 'Y':
            printf("ok\n");
            break;
        case 'n':case 'N':
            printf("no\n");
            break;
        default:
            printf("你输入了错误的值\n");
            break;
    }
}
