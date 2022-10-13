#include <stdio.h>
#include <stdlib.h>

int i, j, k;

int F4016() {
    printf("(A)\n");
    for(i=1;i<=10;i++){
        for(j=0;j<i;j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n(B)\n");
    for(i=1;i<=10;i++){
        for(j=0;j<11-i;j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n(C)\n");
    for(i=1;i<=10;i++){
        for(j=0;j<i;j++)
            printf("%s", " ");
        for(k=0;k<11-i;k++)
            printf("%s", "*");

        printf("\n");
    }

    printf("\n(D)\n");
    for(i=1;i<=10;i++){
        for(j=0;j<11-i;j++)
            printf("%s", " ");
        for(k=0;k<i;k++)
            printf("%s", "*");
        printf("\n");
    }
}