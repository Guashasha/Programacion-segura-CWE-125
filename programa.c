#include <stdio.h>

int main(int argc, char *argv[]) {
  char buffer[16];
  gets(buffer);
  printf(buffer);
  printf("\n");
  return 0;
}
