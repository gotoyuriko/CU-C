#include<stdio.h>

int main(void)
{
    int score;
    
    printf("点数を入力してください：");
    scanf("%d",&score);
    
    if(score > 60) {
        printf("合格\n");
        if(score > 80) printf("大変よくできました\n");
		else		   printf("良くできました\n");
    }else {
        printf("不合格\n");
        if(score > 40) printf("あと一歩です\n");
		else		   printf("基礎から見直しましょう\n");
    }
    return 0;
}