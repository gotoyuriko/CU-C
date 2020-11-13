#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int ransu, i;
    
    // printf("1 ~ 6間の値をランダムに10個表示\n\n");
    //RAND_MAX：システム側であらかじめ決まっている乱数の最大値を呼び出す特別な変数名
    // printf("乱数の「タネ」を入力してください：");
    // scanf("%d",&seed);
    // srand(seed);
    
    srand(time(NULL));
    printf("\n現在時刻の値を元にした疑似乱数列を計算して表示\n\n");
    
    i=1;
    while(i<=10)
    {
        ransu=rand()%6+1;
        printf("%d番目の値 %d\n", i, ransu);
        i++;
    }
    
    return 0;
}