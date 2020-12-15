#include <stdio.h>
#include <stdlib.h>
#define NUM 100

int main(void)
{
  int Data[NUM];
  int tmp, id, max_id, flag_id;

  printf("＝＝ 小➡大へ 並べ替えプログラム ＝＝\n\n");

  // サンプルデータ生成（ 範囲0～99 の擬似乱数 ）
  for (id = 0; id < NUM; id++)
    Data[id] = rand() % 100;

  for (id = 0; id < NUM; id++)
    printf("%d  ", Data[id]);
  printf("\n＊＊＊ 並べ替え前 ＊＊＊\n\n");

  //＊＊＊ 『小➡大へ 並べ替え』処理ここから ＊＊＊
  for (flag_id = NUM - 1; flag_id >= 1; flag_id--)
  {
    max_id = flag_id;
    for (id = 0; id < flag_id; id++)
    {
      if (Data[id] > Data[max_id])
        max_id = id;
    }

    tmp = Data[max_id];
    Data[max_id] = Data[flag_id];
    Data[flag_id] = tmp;
  }
  //＊＊＊ 『小➡大へ 並べ替え』処理ここまで ＊＊＊

  for (id = 0; id < NUM; id++)
    printf("%d  ", Data[id]);
  printf("\n＊＊＊ 並べ替え後 ＊＊＊\n");

  return 0;
}