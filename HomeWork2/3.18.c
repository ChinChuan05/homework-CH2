#include <stdio.h>
#include <stdlib.h>

float sale;

int main() {
    while(1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sale);
        if(sale == -1)
            break;

        printf("\nSalary is %.2f\n", 200 + sale*0.09 );
    }
}
