#include <stdio.h>
#include <stdlib.h>

int num[5] = {9, 7, 5, 3, 1};

int F4031() {
    for(int i=4;i>=-4;i--){
        for(int j=0;j<abs(i);j++){
            printf(" ");
        }
        
        for(int k=0;k<num[abs(i)];k++){
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
/*
4:1
3:3
2:5
1:7
0:9
*/