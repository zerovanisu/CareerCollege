// for4.c
#include <stdio.h>

int main(void) {
  //
  for(int i = 0; i < 10; i ++) {
    printf("%dの", i);
    printf("二乗は%dで、", i * i);
    printf("三乗は%dです\n", i * i * i);
  }

  return 0;
}
