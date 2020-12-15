#include <stdio.h>
#define STUD 5
#define CORS 3
int main(void)
{
  int gi, ki, sum_g;
  int Sum_k[CORS]={0,0,0};
  int Max_k[CORS]={0,0,0};
  int Min_k[CORS]={100,100,100};
  int Data[STUD][CORS]={{70,71,72},{80,81,82},{90,91,92},{70,80,90},{75,85,95}};
 
  // Data[0][0]=70; Data[0][1]=71; Data[0][2]=72;
  // Data[1][0]=80; Data[1][1]=81; Data[1][2]=82;
  // Data[2][0]=90; Data[2][1]=91; Data[2][2]=92;
  // Data[3][0]=70; Data[3][1]=80; Data[3][2]=90;
  // Data[4][0]=75; Data[4][1]=85; Data[4][2]=95;
 
  printf("\t\t科目0\t科目1\t科目2\t合計\t平均\n");
 
  for(gi=0; gi<STUD; gi++){
 
    sum_g=0;
    printf("学籍番号 %d 番\t", gi);
    for(ki=0; ki<CORS; ki++){
      printf("%d 点\t", Data[gi][ki]);
      sum_g = sum_g + Data[gi][ki];
      Sum_k[ki] = Sum_k[ki] + Data[gi][ki];
      if(Max_k[ki] < Data[gi][ki]) Max_k[ki]=Data[gi][ki];
      if(Min_k[ki] > Data[gi][ki]) Min_k[ki]=Data[gi][ki];
    }
    printf("%d 点\t", sum_g);
    printf("%.1f 点\n", (float)sum_g/CORS);
    
  }
  printf("\n【科目平均】\t");
  for(ki=0; ki<CORS; ki++) printf("%.1f点\t", (float)Sum_k[ki]/STUD);
  printf("\n【科目最高】\t");
  for(ki=0; ki<CORS; ki++) printf("%d点\t", Max_k[ki]);
  printf("\n【科目最低】\t");
  for(ki=0; ki<CORS; ki++) printf("%d点\t", Min_k[ki]);
    
  return 0;
}