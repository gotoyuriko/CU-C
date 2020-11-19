#include<stdio.h>
int main()
{
     int yi, xi;
    
    // for(yi=1; yi<=5; yi++){
    //     for(xi=1; xi<=6-yi; xi++){
    //         printf("*");
    // 	}
    //     printf("\n");
    // }
    
    for(yi=1; yi<=9; yi++){
        // if(yi==5) continue;
        // if(yi==5) break;
        // if(yi==5) return 0;
        printf("\n%dの段｜\t", yi);
        for(xi=1; xi<=9; xi++){
             printf("%d*%d=%d\t", yi,xi,yi*xi);
    	}
        printf("\n");
    }
    
    printf("\t\t\t==== かけ算 九九表 ===\n");
    return 0;
}