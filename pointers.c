#include <stdio.h>

int main() {
    int a = 5;
    /* points to memory address of a */
    int *pA = &a;

    printf("Value of a: %d\n", a);
    printf("Address of pointer a: %p\n", pA);
    printf("Dereferenced value of pointer a: %d\n\n", *pA);
    
    /* increment a, leave pointer pA unchanged */
    a++;

    printf("Value of a: %d\n", a);
    printf("Address of pointer a: %p\n", pA);
    printf("Dereferenced value of pointer a: %d\n\n", *pA);

    /* increment value at the location pointed by pA */
    (*pA)++;

    printf("Value of a: %d\n", a);
    printf("Address of pointer a: %p\n", pA);
    printf("Dereferenced value of pointer a: %d\n\n", *pA);
    
    /* storing new data */
    int b = 9;
    /* increment original memory address by 1, which then points to b */
    *pA++;
    printf("Value of b: %d\n", b);
    printf("Address of pointer a + 1: %p\n", pA);
    printf("Dereferenced value of pointer a + 1: %d\n", *pA);

    if(b == *pA) {
	    printf("b and *pA are equal!\n");
    }
}
