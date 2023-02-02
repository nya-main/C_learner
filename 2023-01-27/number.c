#include <stdio.h>

int main(void){
  unsigned long long sum = 0LL;
  unsigned int count = 0;
  printf("输入一个数字: ");
  scanf("%u", &count);
  for(unsigned int i = 1;i <= count;++i){
    sum += i;
  }
  printf("从1到%u相加的结果为:%lld\n", count, sum);
  return 0;
}
