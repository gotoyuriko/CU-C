#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
  int ransu, i;
 
  printf("1 ～ 6 間の値をランダムに１０個表示\n\n");

  for(i=1; i<=10; i++)
  {
    ransu=rand()%6 + 1;
    printf("%d番目の値 %d \n", i, ransu);
  }
 
  return 0;
}