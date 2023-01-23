//shit code
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char letter = 0;
    printf("输入一个小写字母: ");
    scanf("%c", &letter);
    if (letter >= 'Z')
    {
        letter = letter - 32;
        printf("你输的字母变成大写后是: %c\n", letter);
    }
    else
        printf("你好歹输一个小写字母啊(恼): %c\n", letter);
}
