#include<stdio.h>
int main(void)
{
    // int age;
    // printf("年齢を入力してください：");
    // scanf("%d",&age);
    
    // if((age<6)&&(12<=age))	printf("ご利用になれます\n");
    // else					printf("ご利用になれません\n");
    
    // if((age<6)||(12<=age))	printf("ご利用になれません\n");
    // else					printf("ご利用になれます\n");
    
    // if(!(age<6)||(12<=age))	printf("ご利用になれます\n");
    // else					printf("ご利用になれません\n");
    
    
    //********************************************************
    
    int usr1_age, usr2_age;
    
    printf("お一人目の年齢を入力してください：");
    scanf("%d", &usr1_age);
    printf("お二人目の年齢を入力してください：");
    scanf("%d", &usr2_age);
    
    //エラー処理
    if((usr1_age<0)||(usr2_age<0)){
        printf("***入力値が年齢でないため判定できません***\n");
        return 0;
    }
    
	// if((usr1_age>=12)||(usr2_age>=12))	printf("ご利用になれます\n");
	// else								printf("ご利用になれません\n");
    if((usr1_age<12)&&(usr2_age<12))	printf("ご利用になれません\n");
	else								printf("ご利用になれます\n");
    
    return 0;
}