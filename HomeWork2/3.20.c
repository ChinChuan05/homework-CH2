#include <stdio.h>
#include <stdlib.h>

float hours, rate;

int main() {
    while(1){
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%f", &hours);
        printf("\nEnter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);

        if(hours > 40)
            printf("\nSalary is $%.2f\n\n", hours * rate + (hours-40)*rate*0.5);
        else
            printf("\nSalary is $%.2f\n\n", hours * rate);
    }
}
