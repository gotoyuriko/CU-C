#include<stdio.h>

int main(void)
{
    int score;
    
    printf("点数を入力してください：");
    scanf("%d",&score);
    
    if(score > 100) 	 printf("入力点数が0~100点ではありません\n");
    else if(score >= 80) printf("合格\n大変よくできました\n");
    else if(score >= 60) printf("合格\n良くできました\n");
    else if(score >= 40) printf("不合格\nあと一歩です\n");
	else if(score >= 0)  printf("不合格\n基礎から見直しましょう\n");
    else				 printf("入力点数が0~100点ではありません\n");
    
    return 0;
}