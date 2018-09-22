Manage arguments of macros in C.


## usage

### get

```c
// Get nth argument.
EMA_GET<N>(args)
```

```c
// get index 0 (first) argument
printf("EMA_GET0(a0, a1, a2): %s.\n", EMA_GET0("a0", "a1", "a2"));

// get max of 3 values using variable argument (variadic) macro
#define MAX2(A, B) ((a)>(b)? (a) : (b))
#define MAX3(A, B, C) MAX2(MAX2(A, B), C)
#define MAX(...) EMA_GET0(EMA_GET3(__VA_ARGS__, MAX3, MAX2)(__VA_ARGS__))
printf("MAX(7, 1, 2): %d.\n", MAX(7, 1, 2));
```


### count

```c
// Count number of arguments.
EMA_COUNT(args)
```

```c
printf("EMA_COUNT(3, 5, 2, 3): %d.\n", EMA_COUNT(3, 5, 2, 3));
```


### geteven

```c
// Get even index arguments.
EMA_GETEVEN(args)
```

```c
printf("EMA_GETEVEN(7, 1, 2, 3): %d, %d.\n", EMA_GETEVEN(7, 1, 2, 3));
```


### getodd

```c
// Get odd index arguments.
EMA_GETODD(args)
```

```
printf("EMA_GETODD(7, 1, 2, 3): %d, %d.\n", EMA_GETODD(7, 1, 2, 3));
```


### prefix

```c
// Prefix all arguments with a value.
EMA_PREFIX(value, args)
```

```c
printf("EMA_PREFIX(7, 1, 2, 3): %d, %d, %d.\n", EMA_PREFIX(7, 1, 2, 3));
```


### postfix

```c
// Postfix all arguments with a value.
EMA_POSTFIX(value, args)
```

```c
printf("EMA_POSTFIX(7, 1, 2, 3): %d, %d, %d.\n", EMA_POSTFIX(7, 1, 2, 3));
```


### merge

```c
// Merge all arguments.
EMA_MERGE(args)
```

```c
printf("EMA_MERGE(7, 1, 2, 3): %d.\n", EMA_MERGE(7, 1, 2, 3));
```


### mergepair

```c
// Merge all arguments pairs.
EMA_MERGEPAIR(args)
```

```c
printf("EMA_MERGEPAIR(7, 1, 2, 3): %d, %d.\n", EMA_MERGEPAIR(7, 1, 2, 3));
```


### join

```c
// Join all arguments, with separator.
EMA_JOIN(separator, args)
```

```c
printf("EMA_JOIN(7, 1, 2, 3): %d.\n", EMA_JOIN(7, 1, 2, 3));
```


### joinpair

```c
// Join all argument pairs, with separator.
EMA_JOINPAIR(separator, args)
```

```c
printf("EMA_JOINPAIR(7, 1, 2, 3): %d, %d.\n", EMA_JOINPAIR(7, 1, 2, 3));
```


### space

```c
// Space arguments, a character apart.
EMA_SPACE(args)
```

```c
printf("EMA_SPACE(h, b, c, d): %s.\n", EMA_SPACE("h", "b", "c", "d"));
```


### spacepair

```c
// Space argument pairs, a character apart.
EMA_SPACEPAIR(args)
```

```c
printf("EMA_SPACEPAIR(h, b, c, d): %s, %s.\n", EMA_SPACEPAIR("h", "b", "c", "d"));
```
