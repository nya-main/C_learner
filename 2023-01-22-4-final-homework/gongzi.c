#include <stdio.h>

int main(void)
{
    float gongzi_per_week = 0.0f;
    float work_hour_per_day = 0.0f;
    int yuan = 0;
    int fen = 0;
    printf("输入你一星期的工资(元): ");
    scanf("%f", &gongzi_per_week);
    printf("输入你每天的工作时长(h): ");
    scanf("%f", &work_hour_per_day);
    yuan = (int)gongzi_per_week/(work_hour_per_day*7);
    fen = (int)(100.0*(gongzi_per_week/(work_hour_per_day*7)-yuan) + 0.5);
    printf("你的时薪为: %d元,%d分\n", yuan, fen);
}
