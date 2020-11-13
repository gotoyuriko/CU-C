#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int ANSWER, num=0, continue_game=1;
    
    srand(time(NULL));
    
    while(continue_game)
    {
        printf("\n=== 数当てゲーム ===\n");
        ANSWER=rand()%6+1;
        
        while(1)
        {
            printf("\n整数を入力してください：");
            scanf("%d",&num);
            
            if(num==ANSWER){printf("\nそう！%dが正解\n",num); break;}
            else if(num<ANSWER) printf("\nはずれ。それより大きいよ\n");
            else printf("\nはずれ。それより小さいよ\n");
        }
        printf("\nゲームをつづけますか?(つづける：1 終了：0):");
        scanf("%d",&continue_game);
    }
    printf("\nゲームを終了しました\n");
    return 0;
}
            