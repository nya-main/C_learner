//shitcode
#include <stdio.h>
#include <stdbool.h>
//要求:
//1.25岁以上的化学生,不来自耶鲁大学
//2.耶鲁大学化学毕业生
//3.25岁以上耶鲁大学非化学毕业生
//4.28岁以下,哈佛大学经济学毕业生

int main(void)
{
    int age = 0; //年龄
    int school = 0; //学校
    int subject = 0; //学科
    bool is_reject = false; //布尔拒绝测试
    printf("输入你的年龄: ");
    scanf("%d", &age);
    printf("输入你的学校(\"1\"代表哈佛大学,\"2\"代表耶鲁大学,\"3\"代表其他大学): ");
    scanf("%d", &school);
    printf("输入你的学科(\"1\"代表化学专业,\"2\"代表经济专业,\"3\"代表其他专业): ");
    scanf("%d", &subject);
}
