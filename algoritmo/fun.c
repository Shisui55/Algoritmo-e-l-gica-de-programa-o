#include <stdio.h>

void sayin(char *name, int age) {
  printf("Hello %s\n", name);
  printf("You are %d\n\n", age);
}

int main() {
  sayin("Cauã", 18);
  sayin("kauan", 28);
  sayin("Cauan", 98);
  return 0;
}