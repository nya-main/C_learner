#include <stdio.h>

int main(void)
{
    float gongzi_per_week = 0.0f;
    float work_hour = 0.0f;
    float gongzi_per_hour = 0.0f;
    printf("输入你一星期的工资(元): ");
    scanf("%f", &gongzi_per_week);
    printf("输入你每天的工作时长(h): ");
    scanf("%f", &work_hour);
    gongzi_per_hour = gongzi_per_week/(work_hour * 7);
    printf("你的时薪为: %.2f 元\n", gongzi_per_hour);
}
