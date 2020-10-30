#include<stdio.h>
int main(void){
    int a, b, sum;
    float average;
    
    printf("英語の点数を入力してください：");
    scanf("%d",&a);
    printf("数学の点数を入力してください：");
    scanf("%d",&b);
    
    sum = a+b;
    printf("合計点は%d点です\n\n", sum);
    
    average = (float)sum/(float)2;
    printf("合計点は%f点です\n\n", average);
    return 0;
}
    