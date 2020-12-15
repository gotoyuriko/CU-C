#include <stdio.h>
#define NUM 5

int main(void)
{
    int i, max, min, sum;
    int Data[NUM];
    // int Data[3];

    // Data[0] = 11;
    // Data[1] = 22;
    // Data[2] = 33;

    for (i = 0; i < NUM; i++)
    {
        printf("Data[%d]の値を入力してください\n", i);
        scanf("%d", &Data[i]);
    }

    sum = 0;
    max = min = Data[0];
    for (i = 0; i < NUM; i++)
    {
        sum = sum + Data[i];
        if (max < Data[i])
            max = Data[i];
        if (min > Data[i])
            min = Data[i];
    }

    printf("\n合計は%dです\n", sum);
    printf("\n平均は%.1fです\n", (float)sum / NUM);
    printf("\n最大値は%dです\n", max);
    printf("\n最小値は%dです\n", min);

    return 0;
}