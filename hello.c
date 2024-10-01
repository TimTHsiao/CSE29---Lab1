#include <stdio.h>

int main() {
  char hello[] = "Hello!"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };
  char binary[] = {43, 32, 56, 120, 1, 7, 10, 0};
  char test_message[] = "This is edited in codespace, then uploaded to ieng6";

  puts(hello);
  puts(hello2);
  puts(binary);
  puts(test_message);

  return 0;
}
