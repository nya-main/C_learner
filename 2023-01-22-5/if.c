#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const double price = 3.50;
    double price_now = 0.0;
    int number = 0;
    printf("买多少个? ");
    scanf("%d", &number);
    double should_pay = 0.0;
    if ( number < 5 )
    {
        should_pay = number * price;
        price_now = price;
    }
    else
    {
        should_pay = number * ( price * 0.9 );
        price_now = price * 0.9;
    }
    printf("原价为%.2f,买了%d个,共花费%.2f,每个单价为%.2f", price, number, should_pay,
           price_now);
}
