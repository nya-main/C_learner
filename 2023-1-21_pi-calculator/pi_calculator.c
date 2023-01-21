#include <stdio.h>
#define PI 3.1415926f       //pi值

int main(void)
{
    float perimeter = 0.0f;     //周长
    float radius = 0.0f;        //半径
    float area = 0.0f;      //面积
    float diameter = 0.0f;      //直径
    printf("输入圆的半径: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    perimeter = PI * radius * 2;
    diameter = radius * 2;
    printf("直径: %.2f\n",diameter);
    printf("周长: %.2f\n", perimeter);
    printf("面积: %.2f\n", area);
}
