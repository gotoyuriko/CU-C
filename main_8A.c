#include<stdio.h>
int main()
{
     int i, END;
     // for(i=1; i<=10; i++){
     //     printf("%d ",i);
     // }
    
    // for(i=25; i>=15; i--){
    //      printf("%d ",i);
    //  }
    
    // for(i=1; i<=10; i+=2){
    //     printf("%d ",i);
    // }
    
    printf("いくつまでを表示しますか：");
    scanf("%d",&END);
    
    // for(i=1; i<=END; i++){
    //     if((i%3==0)&&(i%5==0)) 		printf("FizzBuzz ");
    //     else if(i%3==0) 	printf("Fizz ");
    //     else if(i%5==0) 	printf("Buzz ");
    //     else				printf("%d ",i);
    // }
    
    for(i=1; i<=END; i++){
        if(i%5==0)
            if(i%3==0)		printf("FizzBuzz ");
        	else			printf("Buzz ");
        else
            if(i%3==0)		printf("Fizz ");
        	else			printf("%d ", i);
    }
    
     printf("\nfor文の繰り返し終了\n");
     return 0;
}