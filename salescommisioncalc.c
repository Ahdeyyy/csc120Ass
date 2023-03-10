/*
                    (Sales-Commission Calculator) 
One large chemical company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
week and will calculate and display that salesperson’s earnings. Process one salesperson's figures at a
time.
*/

#include <stdio.h>

int main(void)
{
    float grossSales;
    float commission;
    float totalEarnings;

    // initialize variables
    grossSales = 0.0;
    commission = 0.0;
    totalEarnings = 0.0;

    // prompt user for input with a while loop using sentinel value of -1
    while (grossSales != -1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &grossSales);

        if (grossSales != -1)
        {
            // calculate commission
            commission = grossSales * 0.09;

            // calculate total earnings
            totalEarnings = 200 + commission;

            // display the salary
            printf("Salary is: $%.2f\n", totalEarnings);
        }
    }

    return 0;
}