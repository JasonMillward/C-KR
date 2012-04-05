#include <stdio.h>

int main(int argc, const char *argv[]) {
    printf("\\a: hello \a world\n");
    printf("\\b: hello \b world\n");
    printf("\\f: hello \f world\n");
    printf("\\n: hello \n world\n");
    printf("\\r: hello \r world\n");
    printf("\\t: hello \t world\n");
    printf("\\v: hello \v world\n");
    printf("\\111: hello \111 world\n");
    printf("\\x23: hello \x23 world\n");
  return 0;
}