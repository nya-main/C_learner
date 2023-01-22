#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 4;
    double y = 11.3;
    double z = -114514;
    printf("x原值为: %f,x的平方根为: %f\n", x, sqrt(x));
    printf("y原值为: %f,不大于y的最大数: %f,不小于y的最小数: %f\n", y, floor(y),
            ceil(y));
    printf("z原值为: %f,绝对值为: %f, 不大于最大: %f,不小于最小: %f\n", z,
            fabs(z), floor(z), ceil(z));
    return 0;
}
