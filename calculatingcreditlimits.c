#include <stdio.h>

/*
 *
 * (Calculating Credit Limits)
 * Collecting money becomes increasingly difficult during periods of recession,
 * so companies may tighten their credit limits to prevent their accounts
 * receivable(money owed to them) from becoming too large. In response to a
 * prolonged recession, one company has cut its customers’ credit limits in
 * half. Thus, if a particular customer had a credit limit of $2000, it’s now
 * $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a
 * program that analyzes the credit status of three customers of this company.
 * For each customer you’re given: a) The customer’s account number. b) The
 * customer’s credit limit before the recession. c) The customer’s current
 * balance (i.e., the amount the customer owes the company). Your program should
 * calculate and print the new credit limit for each customer and should
 * determine (and print) which customers have current balances that exceed their
 * new credit limits.
 *
 * */

int main() {
  int account_number;
  float old_credit_limit;
  float new_credit_limit;
  float balance;
  int count;
  count = 0;
  account_number = 0;
  old_credit_limit = 0.0f;
  new_credit_limit = 0.0f;
  balance = 0.0f;

  do {
    printf("Enter the customers account number (-1 to quit): ");
    scanf("%d", &account_number);
    if (account_number == -1) {
      break;
    }
    printf("Enter the customers previous credit limit: ");
    scanf("%f", &old_credit_limit);
    printf("Enter the customers balance: ");
    scanf("%f", &balance);

    new_credit_limit = old_credit_limit / 2.0f;

    printf("The new credit limit is: %.2f:\n", new_credit_limit);

    if (new_credit_limit > (float)balance) {
      printf("Customer's balance has exceeded the credit limit\n");
    }
    count++;
  } while (count < 3);

  return 0;
}
