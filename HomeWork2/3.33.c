#include <stdio.h>
#include <stdlib.h>

int length, breadth;

int main() {
    printf("Enter length: ");
    scanf("%d", &length);
    printf("\nEnter breath: ");
    scanf("%d", &breadth);

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