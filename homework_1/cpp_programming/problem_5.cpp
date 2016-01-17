#include <iostream>

int test(char *s) {
        int x = 0;
        unsigned char c; while (*s) {
                c = *s; while (c) {
                        if (c & 1) x++;
                        c = c >>1;
                }
                s++;
        }
        return x;
}

int main(int argc, char const *argv[]) {
        char testString[] = "Hello, World";
        printf("%d\n", test(testString));
}
