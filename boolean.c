#include <stdio.h>
#include <stdbool.h>

int main() {
  bool a = false; /* false = 0 */
  bool b = true;  /* true = 1 */

  /* booleans are just integers in c; use %d */
  printf("%d, %d\n", a, b);

  if(a) {
    printf("a is true!\n");
  } else {
    printf("a is false!\n");
  }
  
  /* does the same */
  printf(a ? "a is true\n" : "a is false\n");
}
