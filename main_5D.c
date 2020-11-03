/*
--------------------------------------------
名前を入力してください：taro
年齢を入力してください：33
身長を入力してください：170
体重を入力してください：66.6
******
taroさんは33歳、身長170.0cm、体重66.6kgですね
taroさんの肥満度指数は 25.2 です
taroさんは［太りぎみ］です
--------------------------------------------
*/
#include<stdio.h>

int main(void)
{
    char name[20];
    int age;
    float height, weight,bmi;
    
    printf("名前を入力してください：");
    scanf("%s",name);
    
    printf("%sさんの年齢を入力してください：",name);
    scanf("%d",&age);
    
    printf("%sさんの身長を入力してください：",name);
    scanf("%f", &height);
    
    printf("%sさんの体重を入力してください：",name);
    scanf("%f", &weight);
    
    bmi=weight*10000/(height*height);
    printf("%sさんは%d歳、身長%.1fcm、体重%.1fkgですね\n", name, age, height, weight);
    printf("%sさんの肥満度指数は %.1f です\n",name,bmi);
    
    if(bmi >= 30.0) 				printf("太り過ぎ");
    else if(25 <= bmi <30.0) 		printf("太りぎみ");
    else if(18.5 <= bmi < 25.0) 	printf("標準");
    else if(16.0 <= bmi < 18.5) 	printf("痩せ気味");
    else						    printf("痩せすぎ");
    
    return 0;
}