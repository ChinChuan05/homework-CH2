#include <stdio.h>
#include <stdlib.h>

float principal, rate, day;

int F3019() {
    while(1){
        printf("Enter loan principal (-1 to end): ");
        scanf_s("%f", &principal);
        if(principal == -1)
            break;

        printf("\nEnter interest rate: ");
        scanf_s("%f", &rate);
        printf("\nEnter term of the loan in days: ");
        scanf_s("%f", &day);
        printf("\nThe interest charge is $%.2f", principal * rate * day /365);
    }
}
