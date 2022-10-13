#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i, j;
float interest_rate[5] = {0.1, 0.105, 0.11, 0.115, 0.12};

int F4015() {
    for(i=0;i<5;i++){
        printf("Interest rate %.1f%%. After 15 years will be $%.2f\n", interest_rate[i]*100.0, 5000 * pow(1+interest_rate[i], 15));
    }
}