#include <stdio.h>

/*
 *
 * (Calculating Sales)
 * An online retailer sells five different products whose retail prices are
 * shown in the following table:
 * 1 $ 2.98
 * 2 $ 4.50
 * 3 $ 9.98
 * 4 $ 4.49
 * 5 $ 6.87
 * Write a program that reads a series of pairs of numbers as follows:
 * a) Product number
 * b) Quantity sold for one day
 * Your program should use a switch statement to help determine the retail price
 * for each product. Your program should calculate and display the total retail
 * value of all products sold last week.
 *
 * */

int main() {
  int product_number;
  int quantity_sold;
  int day;
  float price;
  float total_value;
  total_value = 0.0f;
  price = 0.0f;
  day = 1;
  product_number = 0;
  quantity_sold = 0;

  while (day <= 7) {
    printf("Day %d\n", day);
    printf("Enter product number (-1 to quit): ");
    scanf("%d", &product_number);
    if (product_number == -1) {
      break;
    }
    switch (product_number) {
    case 1:
      price = 2.98;
      break;
    case 2:
      price = 4.50;
      break;
    case 3:
      price = 9.98;
      break;
    case 4:
      price = 4.49;
      break;
    case 5:
      price = 6.87;
      break;
    default:
      printf("Enter a valid product (1-5)\n");
      continue;
      break;
    }
    printf("Enter the quanity sold: ");
    scanf("%d", &quantity_sold);

    total_value += price * quantity_sold;
    printf("Total sales: $%.2f\n", total_value);
    day++;
  }

  printf("Total sales for the week: $%.2f\n", total_value);

  return 0;
}
