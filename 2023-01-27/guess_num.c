#include <stdio.h>

int main(void)
{
  const int luckynum = 23; //幸运数字
  int retrytimes = 4; //机会次数
  int count = 0; //尝试的次数
  int choice = 0; //选择
  for(;;)
  {
  printf("输入数字(0-30),看你能不能猜到我的幸运数字: ");
  scanf("%d", &choice);
  switch (retrytimes)
  {
    case 0: 
      printf("没有次数了qwq\n");
      break;
      default:
      retrytimes = retrytimes - 1;
      if(choice == 23)
      {
        printf("对啦!你好强!\n");
        break;
      }
      else
      {
      printf("错啦...再试一次吧,你还有%d次机会\n", retrytimes);
      }
  }
  }
  return 0;
}
