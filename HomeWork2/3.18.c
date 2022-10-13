#include <stdio.h>
#include <stdlib.h>

float sale;

int F3018() {
    while(1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf_s("%f", &sale);
        if(sale == -1)
            break;

        printf("\nSalary is %.2f\n", 200 + sale*0.09 );
    }
}
