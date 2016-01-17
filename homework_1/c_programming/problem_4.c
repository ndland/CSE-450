#include <stdio.h>
#include <string.h>

// Prototype so that the main function can call
// string_duplicator
char *string_duplicator(char *s);

int main(int argc, char const *argv[]) {
  char testString[] = "hello";
  printf("%s\n", string_duplicator(testString));
}

char *string_duplicator(char *s) {
  char *cpy;
  for (int i = 0; i <= strlen(s); i++) {
    cpy[i] = s[i];
  }
  return(cpy);
}
