#include <stdio.h>
int main(void) {
  int i;
  float sum = 0;
  for(i=1;i<=100;i++) {
    sum += i * i;
  }
  printf("Sum of 1 squares to 100 squares is %f\n",sum);
}