#include <stdio.h>
#include <stdlib.h>

float principal, rate, day;

int main() {
    while(1){
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        if(principal == -1)
            break;

        printf("\nEnter interest rate: ");
        scanf("%f", &rate);
        printf("\nEnter term of the loan in days: ");
        scanf("%f", &day);
        printf("\nThe interest charge is $%.2f", principal * rate * day /365);
    }
}
