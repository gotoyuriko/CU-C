#include <stdio.h>
int main(void)
{
  int num1,num2,num3,max;
 
  printf("整数１を入力してください：");
  scanf("%d",&num1);
  printf("整数２を入力してください：");
  scanf("%d",&num2);
  printf("整数３を入力してください：");
  scanf("%d",&num3);
 
  // if((num1>=num2)&&(num1>=num3)) printf("最大値は%dです\n",num1);
  // else if((num2>=num1)&&(num2>=num3)) printf("最大値は%dです\n",num2);
  // else if((num3>=num1)&&(num3>=num2)) printf("最大値は%dです\n",num3);
    
  // if(num1>=num2)
  //     if(num1>=num3) printf("最大値は%dです\n",num1);
  //     else			 printf("最大値は%dです\n",num3);
  // else 
  //     if(num2>=num3) printf("最大値は%dです\n",num2);
  // else			 printf("最大値は%dです\n",num3);
    
  max = num1;
  if(max<=num2) max = num2;
  if(max<=num3) max = num3;
  printf("最大値は%dです\n",max);
 
  return 0;
}