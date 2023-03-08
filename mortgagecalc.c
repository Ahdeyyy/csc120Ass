/*
                        (Mortgage Calculator)
Develop a C program to calculate the interest accrued on a bank customer's mortgage. For each customer, the following facts are available:
a) the account number
b) the mortgage amount
c) the mortgage term
d) the interest rate
The program should input each fact, calculate the total interest payable ( = mortgage amount
× interest rate × mortgage term), and add it to the mortgage amount to get the total amount payable.
It should calculate the required monthly payment by dividing the total amount payable by the
number of months in the mortgage term. The program should display the required monthly payment rounded off to the nearest dollar.
*/
#include <stdio.h>

int main(void)
{
    int accountNumber;
    float mortgageAmount;
    float mortgageTerm;
    float interestRate;
    float totalInterest;
    float totalAmountPayable;
    float monthlyPayment;

    // initialize variables
    accountNumber = 0;
    mortgageAmount = 0.0;
    mortgageTerm = 0.0;
    interestRate = 0.0;
    totalInterest = 0.0;
    totalAmountPayable = 0.0;
    monthlyPayment = 0.0;

    // prompt user for input with a while loop using sentinel value of -1
    while (accountNumber != -1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        if (accountNumber != -1)
        {
            printf("Enter mortgage amount (in dollars) : ");
            scanf("%f", &mortgageAmount);

            printf("Enter mortgage term (in years) : ");
            scanf("%f", &mortgageTerm);

            printf("Enter interest rate (as a decimal) : ");
            scanf("%f", &interestRate);

            // calculate total interest
            totalInterest = mortgageAmount * interestRate * mortgageTerm;

            // calculate total amount payable
            totalAmountPayable = mortgageAmount + totalInterest;

            // calculate monthly payment
            monthlyPayment = totalAmountPayable / (mortgageTerm * 12);

            // display the monthly payable interest

            printf("The monthly payable interest is: $%.0f\n", monthlyPayment);
        }
    }

    return 0;

}



