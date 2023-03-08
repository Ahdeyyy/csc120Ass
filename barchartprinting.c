#include <stdio.h>

/*
 * (Bar-Chart Printing Program)
 * One interesting application of computers is drawing graphs
 * and bar charts. Write a program that reads five numbers (each between 1 and
 * 30). For each number read, your program should print a line containing that
 * number of adjacent asterisks. For example, if your program reads the number
 * seven, it should print *******.
 *
 * */

int main() {

  int count;
  count = 0;
  int input;
  input = 0;
  int print_count;
  print_count = 0;

  while (count < 5) {
    printf("Enter a number (1 - 30) -1 to quit: ");
    scanf("%d", &input);
    if (input == -1) {
      break;
    }
    if (input > 30 || input < 1) {
      printf("Enter a number between 1 and 30\n");
      continue;
    }
    for (; print_count < input; print_count++) {
      printf("*");
    }
    printf("\n");
    print_count = 0;
    count++;
  }

  return 0;
}
