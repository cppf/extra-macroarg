# omacroarg

Manage arguments of macros in C.


## usage

### get

```c
// Get nth argument.
OMA_GET<N>(args)
```

```c
// get index 0 (first) argument
printf("OMA_GET0(a0, a1, a2): %s.\n", OMA_GET0("a0", "a1", "a2"));

// get max of 3 values using variable argument (variadic) macro
#define MAX2(A, B) ((a)>(b)? (a) : (b))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...) OMA_GET0(OMA_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))
printf("MAX(7, 1, 2): %d.\n", MAX(7, 1, 2));
```


### count

```c
// Count number of arguments.
OMA_COUNT(args)
```

```c
printf("OMA_COUNT(3, 5, 2, 3): %d.\n", OMA_COUNT(3, 5, 2, 3));
```


### geteven

```c
// Get even index arguments.
OMA_GETEVEN(args)
```

```c
printf("OMA_GETEVEN(7, 1, 2, 3): %d, %d.\n", OMA_GETEVEN(7, 1, 2, 3));
```


### getodd

```c
// Get odd index arguments.
OMA_GETODD(args)
```

```
printf("OMA_GETODD(7, 1, 2, 3): %d, %d.\n", OMA_GETODD(7, 1, 2, 3));
```


### prefix

```c
// Prefix all arguments with a value.
OMA_PREFIX(value, args)
```

```c
printf("OMA_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", OMA_PREFIX(7, 1, 2, 3));
```


### postfix

```c
// Postfix all arguments with a value.
OMA_POSTFIX(value, args)
```

```c
printf("OMA_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", OMA_POSTFIX(7, 1, 2, 3));
```


### merge

```c
// Merge all arguments.
OMA_MERGE(args)
```

```c
printf("OMA_MERGE(7, 1, 2, 3): %d.\n", OMA_MERGE(7, 1, 2, 3));
```


### mergepair

```c
// Merge all arguments pairs.
OMA_MERGEPAIR(args)
```

```c
printf("OMA_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", OMA_MERGEPAIR(7, 1, 2, 3));
```


### join

```c
// Join all arguments, with separator.
OMA_JOIN(separator, args)
```

```c
printf("OMA_JOIN(7, 1, 2, 3): %d.\n", OMA_JOIN(7, 1, 2, 3));
```


### joinpair

```c
// Join all argument pairs, with separator.
OMA_JOINPAIR(separator, args)
```

```c
printf("OMA_JOINPAIR(7, 1, 2, 3): %d, %d.\n", OMA_JOINPAIR(7, 1, 2, 3));
```


### space

```c
// Space arguments, a character apart.
OMA_SPACE(args)
```

```c
printf("OMA_SPACE(h, b, c, d): %s.\n", OMA_SPACE("h", "b", "c", "d"));
```


### spacepair

```c
// Space argument pairs, a character apart.
OMA_SPACEPAIR(args)
```

```c
printf("OMA_SPACEPAIR(h, b, c, d): %s, %s.\n", OMA_SPACEPAIR("h", "b", "c", "d"));
```
