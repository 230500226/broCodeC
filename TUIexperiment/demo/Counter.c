#include <stdio.h>
#include <unistd.h>
// magic clear screen string
void clearScreen() {
  printf("\033[2J\033[1;1H");
}

int main() {
  for(int i = 0; i < 100; ++i) {
    clearScreen();
    printf("Counting: %d", i);
    fflush(stdout);
    usleep(50000);

  }
}
