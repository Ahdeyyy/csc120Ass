#include <stdio.h>

int main() {

  int score;
  printf("enter your score\n");
  scanf_s("%d", &score);
  if (score > 60) {
    printf("you pass");
  } else {
    printf("you fail");
  }

  return 0;
}
