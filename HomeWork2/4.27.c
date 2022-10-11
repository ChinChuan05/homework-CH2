#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, j, k;

int main() {
    for(i=1;i<=500;i++){
        for(j=1;j<=500;j++){
            for(k=1;k<=500;k++){
                if(pow(i, 2) + pow(j, 2) == pow(k, 2) && k<=500)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
}

