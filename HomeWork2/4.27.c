#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, j;
float k;

int main() {
    for(i=1;i<=500;i++){
        for(j=1;j<=500-i;j++){
            k = sqrt(i*i+j*j);
            if (k-floor(k) == 0 && k!= 0)
                printf("%d %d %.0f\n", i, j, k);
        }
    }
}

