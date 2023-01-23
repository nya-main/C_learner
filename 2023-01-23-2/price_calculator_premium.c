//shit code
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h>

int main(void)
{
    const double price = 3.50;  //原价
    const double discount10 = 0.05;  //10个以上降价百分比
    const double discount20 = 0.1;  //20个以上降价百分比
    const double discount50 = 0.15;  //50个以上降价百分比
    int number = 0;  //购买数量
    double total = 0.0;  //总价
    printf("单价:%.2f,但是多购多便宜,买10个以上单价变%.2f,"
           "20个以上变%.2f,50个以上变%.2f\n",
           price, price*(1-discount10), price*(1-discount20), price*(1-discount50));
    printf("输入购买的数量:");
    scanf("%d", &number);
    total = number * (price * (1.0 - (
        number >= 50 ? discount50 :( //检测是否大于50个
            number >= 20 ? discount20 :( //检测是否大于20个
                number >= 10 ? discount10 : 0.0))))); 
    printf("共花费: %.2f元\n", total);
}
