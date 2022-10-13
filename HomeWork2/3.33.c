#include <stdio.h>
#include <stdlib.h>

int length, breadth;

int F3033() {
    printf("Enter length: ");
    scanf_s("%d", &length);
    printf("\nEnter breath: ");
    scanf_s("%d", &breadth);

    for(int i=1;i<=length;i++) {
        for(int j=1;j<=breadth;j++){
            if(i!=1 && i<length && j!=1 && j<breadth)
                printf(" ");
            else
                printf("*");
        }
    printf("\n");
    }
}