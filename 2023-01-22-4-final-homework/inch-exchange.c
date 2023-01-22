#include <stdio.h>
int main(void)
{
    float num = 0.0L;
    printf("输入一个以英寸为单位的数: ");
    scanf("%f", &num);
    printf("你输入的是: %f,换算为英尺是: %f,换算为码是: %f\n", num, num/12, num/12/3);
}
