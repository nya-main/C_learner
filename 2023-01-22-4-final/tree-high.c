#include <stdio.h>
#include <math.h>

int main(void)
{
    long stick_short = 0L;  //较短的木棍
    long stick_long = 0L;  //较长的木棍
    long short_to_long = 0L;  //短棍到长棍的距离
    long long_to_tree = 0L;  //长棍到树的距离
    long tree_height = 0L;  //树的高度
    printf("输入前面的较短的棍子长(米): ");
    scanf("%ld", &stick_short);
    printf("输入长棍到短棍的距离(米): ");
    scanf("%ld", &short_to_long);
    printf("输入第二根较长的棍子的长,必须比短的棍子长(米): ");
    scanf("%ld", &stick_long);
    printf("输入长棍到树的距离: ");
    scanf("%ld", &long_to_tree);
    tree_height = stick_short + ( short_to_long + long_to_tree) * ( stick_long - stick_short ) / short_to_long;
    printf("树的高度为: %ld\n", tree_height);
}
