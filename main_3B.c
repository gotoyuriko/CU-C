#include<stdio.h>

int main(void)
{
    int age;
	float height;
    
    printf("年齢を入力してください：");
    scanf("%d", &age);
    printf("あなたの年齢は%dですね！！\n",age);

    printf("身長を入力してください：");
    scanf("%f", &height);
    printf("あなたの身長は%.1fですね！！\n",height);
    return 0;
}
