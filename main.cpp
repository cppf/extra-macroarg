#include <stdio.h>
#include "main.h"


// define variadic macro for max
#define MAX2(A, B) ((A)>(B)? (A) : (B))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...) EMA_GET0(EMA_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))


int main() {
	printf("EMA_GET0(a0, a1, a2): %s.\n", EMA_GET0("a0", "a1", "a2"));
	printf("EMA_COUNT(3, 5, 2, 3): %d.\n", EMA_COUNT(3, 5, 2, 3));
	printf("EMA_GETEVEN(7, 1, 2, 3): %d, %d.\n", EMA_GETEVEN(7, 1, 2, 3));
	printf("EMA_GETODD(7, 1, 2, 3): %d, %d.\n", EMA_GETODD(7, 1, 2, 3));
	printf("EMA_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", EMA_PREFIX(7, 1, 2, 3));
	printf("EMA_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", EMA_POSTFIX(7, 1, 2, 3));
	printf("EMA_MERGE(7, 1, 2, 3): %d.\n", EMA_MERGE(7, 1, 2, 3));
	printf("EMA_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", EMA_MERGEPAIR(7, 1, 2, 3));
	printf("EMA_JOIN(7, 1, 2, 3): %d.\n", EMA_JOIN(7, 1, 2, 3));
	printf("EMA_JOINPAIR(7, 1, 2, 3): %d, %d.\n", EMA_JOINPAIR(7, 1, 2, 3));
	printf("EMA_SPACE(h, b, c, d): %s.\n", EMA_SPACE("h", "b", "c", "d"));
	printf("EMA_SPACEPAIR(h, b, c, d): %s, %s.\n", EMA_SPACEPAIR("h", "b", "c", "d"));
	return 0;
}
