#include <stdio.h>

int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };
  chat binary[] = {1010001, 1011110, 10011, 1111110};

  puts(hello);
  puts(hello2);
  puts(binary);

  return 0;
}
