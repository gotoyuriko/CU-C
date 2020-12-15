#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int hand_player, hand_com, continue_game = 1;
  srand(time(NULL));

  printf("\n===  じゃんけん スタート！  ===");

  while (continue_game)
  {
    //＊＊＊「あいこの場合は無限ループ」ブロックここから ＊＊＊
    while (1)
    {
      printf("\n\n👉🏻1,2,3のどれかであなたの手を入れてください");
      printf("\n=================================\n");
      printf("🤜グー:1  🤞チョキ:2  🤚パー:3");
      printf("\n=================================\n");

      // あなたの手
      scanf("%d", &hand_player);
      printf("\n👦🏻あなたの手は       ");
      switch (hand_player)
      {
      case 1:
        printf("［🤜グー］ \n");
        break;
      case 2:
        printf("［🤞チョキ］\n");
        break;
      case 3:
        printf("［🤚パー］ \n");
        break;
      default:
        printf("1,2,3のどれかを入れてください\n\n");
        continue;
      }

      // コンピュータの手
      hand_com = rand() % 3 + 1;
      printf("🤖コンピュータの手は ");
      switch (hand_com)
      {
      case 1:
        printf("［🤜グー］ \n");
        break;
      case 2:
        printf("［🤞チョキ］\n");
        break;
      case 3:
        printf("［🤚パー］ \n");
        break;
      }

      // あいこの判定
      if (hand_player == hand_com)
        printf("\nあいこ！ です\n\n");
      else
        break;
    }
    //＊＊＊「あいこの場合の無限ループ」ブロックここまで ＊＊＊

    // 勝敗判定
    if (hand_player % 3 == hand_com - 1)
      printf("\n🙌あなたの勝ち！\n\n");
    else
      printf("\n🤖コンピュータの勝ち！\n\n");

    // ゲーム継続／終了の確認
    printf("じゃんけんを続けますか？（つづける:1 終了:0）: ");
    scanf("%d", &continue_game);
  }

  printf("ゲーム終了\n");
  return 0;
}