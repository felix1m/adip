#include <stdio.h>
#include <stdlib.h>


int isPalindrome(char *buffer, unsigned long len) {

  if (len == 0) {return 0;}
  if (len == 1) {return 1;}


  int result = 1;
  int i;

  unsigned long max = len / 2;
  len -= 1;
  for (i = 0; i < max; i++) {
    if (buffer[i] != buffer [len-i]) {
      result = 0;
      break;
    }
  }
  return result;
}


int main(int argc, char *argv[]) {
    char *buffer = NULL;
    int read;
    unsigned long len;
    read = getline(&buffer, &len, stdin);
    if (-1 == read)
        printf("No line read...\n");

    if (isPalindrome(buffer, read - 1)) {
      printf("It's a palindrome!");
    } else {
      printf("It's not a palindrome!");
    }

    free(buffer);
    return 0;
}
