// for5.c
#include <stdio.h>

int main(void) {
  //
  for(int i = 0; i < 10; i++) {
    printf(" %d: ", i);
    // iの数だけ * を出力する
    for(int j = 0; j < i; j++) {
      printf("*");
    }
    // 最後の改行
    printf("\n");
  }

  return 0;
}
