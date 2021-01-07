#include <stdio.h>

double odd (int in);

int main(void)
{
  int in;
  double kekka = 0;

  printf("関数odd への入力: ");
  scanf("%d", &in);
  kekka = odd(in);
  printf("関数odd から出力: %f\n", kekka);

  return 0;
}

double odd(int in)
{
  double out;
  out = 2 * in - 1;
  return out;
}