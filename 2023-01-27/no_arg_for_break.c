#include <stdio.h>

int main(void){
  int count = 0;
  for (;;){
    printf("loop1\n");
    printf("loop2\n");
    count = count + 1;
    if (count == 10){
      break;
    }
  }
  return 0;
}
