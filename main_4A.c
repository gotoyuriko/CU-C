#include<stdio.h>
int main(void){
    int a ;
    int b ;
    int tmp;
    
    printf("整数 a を入力してください：");
    scanf("%d",&a);
    printf("整数 b を入力してください：");
    scanf("%d",&b);
    
    printf("%d ÷ %d = %d 余り%d\n\n", a,b,a/b,a%b);
    
    tmp = a;
    a=b;
    b = tmp;
    printf("「a」は%dです\n",a);
    printf("「b」は%dです\n\n",b);
    
    a += 10;
    b -= 10;
    printf("「a」は%dです\n",a);
    printf("「b」は%dです\n\n",b);
    
    a ++;
    b --;
	printf("「a」は%dです\n",a);
    printf("「b」は%dです\n\n",b);
    
    int x =1, y =2, z =3;
    x = z;
    y = x;
    z = y;
    printf("x：%d\n",x);
    printf("y：%d\n",y);
    printf("z：%d\n",z);
    return 0;
}
    