#include <stdio.h>

int main(void)
{
    const float normal_ver = 3.5;  //普通版
    const float vip_ver = 5.5;  //高级版
    int number = 0;  //购买数
    int version = 0;  //版本
    double total_price = 0.0;
    printf("输入购买的数量: ");
    scanf("%d", &number);
    printf("输入要购买的版本( 1 代表vip版, 2 代表normal版): ");
    scanf("%d", &version);
    total_price = number*(normal_ver+(version-1)*(vip_ver-normal_ver)); 
    printf("你选择的版本: %d,购买 %d 份,共花费 %.2f\n", version, number, total_price);
}
