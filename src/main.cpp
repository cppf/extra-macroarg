#include <stdio.h>
#include "omacroarg.h"


// define variadic macro for max
#define MAX2(A, B) ((A)>(B)? (A) : (B))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...) OMA_GET0(OMA_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))


int main() {
	printf("OMA_GET0(a0, a1, a2): %s.\n", OMA_GET0("a0", "a1", "a2"));
	printf("OMA_COUNT(3, 5, 2, 3): %d.\n", OMA_COUNT(3, 5, 2, 3));
	printf("OMA_GETEVEN(7, 1, 2, 3): %d, %d.\n", OMA_GETEVEN(7, 1, 2, 3));
	printf("OMA_GETODD(7, 1, 2, 3): %d, %d.\n", OMA_GETODD(7, 1, 2, 3));
	printf("OMA_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", OMA_PREFIX(7, 1, 2, 3));
	printf("OMA_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", OMA_POSTFIX(7, 1, 2, 3));
	printf("OMA_MERGE(7, 1, 2, 3): %d.\n", OMA_MERGE(7, 1, 2, 3));
	printf("OMA_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", OMA_MERGEPAIR(7, 1, 2, 3));
	printf("OMA_JOIN(7, 1, 2, 3): %d.\n", OMA_JOIN(7, 1, 2, 3));
	printf("OMA_JOINPAIR(7, 1, 2, 3): %d, %d.\n", OMA_JOINPAIR(7, 1, 2, 3));
	printf("OMA_SPACE(h, b, c, d): %s.\n", OMA_SPACE("h", "b", "c", "d"));
	printf("OMA_SPACEPAIR(h, b, c, d): %s, %s.\n", OMA_SPACEPAIR("h", "b", "c", "d"));
	return 0;
}
