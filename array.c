#include <stdio.h>

int main() {
    const int rep = 10;
    int arr[rep];
    int *parr = &arr[0];

    for(int i = 0; i < rep; i++) {
	    *parr = i;  /* set value using pointer */
                    /* arr[i] = i does the same */
	    printf("%p: %d\n", parr, *parr);
	    parr++;     /* point to next location */
    }

    const long size = sizeof(arr);
    printf("filled array with %ld bytes (%ld elements)\n", size, size / 4);
    printf("filled range %p -> %p\n", &arr[0], &arr[rep - 1]);
}
