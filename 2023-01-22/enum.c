#include <stdio.h>
int main(void)
{
    enum weekday { Monday=1, Tuesday, Wednesday, Thursday, Friday};
    enum weekday today = Monday;
    printf("今天是: 星期%d\n", today);
}
