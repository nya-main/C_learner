#include <stdio.h>

int main(void)
{
    float length = 0.0f;  //长
    float width = 0.0f;  //宽
    printf("输入房间的长(英尺): ");
    scanf("%f", &length);
    printf("输入房间的宽(英寸): ");
    scanf("%f", &width);
    printf("房间的面积为: %.2f 平方码", ( length / 3 ) * ( width / 12 / 3 ));
    return 0;
}
