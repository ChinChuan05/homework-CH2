#include <stdio.h>
#include <stdlib.h>

float account, begin_bal, charged, credits, limit;

int main() {
	while(1){
		printf("Enter account number (-1 to end): ");
		scanf("%f", &account);
		if(account == -1)
			break;
			
		printf("\nEnter balance at the beginning of mouth: ");
		scanf("%f", &begin_bal);
		printf("\nEnter total charges: ");
		scanf("%f", &charged);
		printf("\nEnter total caredits: ");
		scanf("%f", &credits);
		printf("\nEnter credit limit: ");
		scanf("%f", &limit);

		printf("\nAccount:\t%.2f", account);
		printf("\nCredit Limit:\t%.2f", limit);
		float new_balance = begin_bal + charged - credits;
		printf("\nBalance:\t%.2f", new_balance);
		printf("\nCredit Limit ");
		if (new_balance > charged){
			printf("Exceeded\n");
		}
		else{
			printf("Not Exceed\n");
		}
	}
}
