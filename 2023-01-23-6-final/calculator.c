//shitcode
#include <stdio.h>
#include <limits.h>

int main(void) {
    double num1 = 0.0; //第一个数字
    double num2 = 0.0; //第二个数字
    double result = 0.0; //结果
    char operation = '0'; //运算符号
    printf("输入计算过程(完整): ");
    scanf("%lf %c %lf", &num1, &operation, &num2);
    switch (operation){ 
        case '+':
            printf("= %f\n", num1 + num2);
            break;
        case '-':  
            printf("= %f\n", num1 -num2);
            break;
        case '*':
            printf("= %f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("= 无效的输入\n");
            else
                printf("= %f\n", num1 / num2);
            break;
        case '%':
            if (num2 == 0)
                printf("= 无效的输入\n");
            else
                printf("= %ld\n", (long)num1 % (long)num2);
            break;
        default:
            printf("= 无效的输入\n");
            break;
    }
    return 0;
}
