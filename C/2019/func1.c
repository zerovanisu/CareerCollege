// func1.c
#include <stdio.h>

// 関数宣言
int add(int a, int b);
int sub(int a, int b);

// 関数実装：足し算する関数
int add(int a, int b) {
    return a + b;
}
// 関数実装：引き算する関数
int sub(int a, int b) {
    return a - b;
}
//
int main(void) {
  //
  int i;
  i = add(10, 20);
  printf("add is %d\n", i);
  i = sub(10, 20);
  printf("sub is %d\n", i);

  return 0;
}
