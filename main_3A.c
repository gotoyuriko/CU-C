#include<stdio.h>

int main(void)
{
    int x  = 5;
    float y = 1.5;
    
    printf("値は%dです\n",x);
    printf("値は%fです\n",y);
    
    x = y;
    printf("xの値は%dで、yの値は%fです\n",x,y);
    return 0;
}
