Comparison Between C++ and Python Structures:
| Category            | C++                                         | Python                                        | Memory            |
| ------------------- | ------------------------------------------- | --------------------------------------------- | ----------------- |
| Fixed Stack-Dynamic | `int arr[5];`                               | `tuple = (1,2,3,4,5)`                         | Stack             |
| Stack-Dynamic       | `int* arr = (int*)alloca(n * sizeof(int));` | Function creates list using `input()`         | Stack (simulated) |
| Fixed Heap-Dynamic  | `int* arr = new int[5]{...};`               | `array.array('i', [...])`                     | Heap              |
| Heap-Dynamic        | `int* arr = new int[n];`                    | `arr = [i for i in range(n)]` using `input()` | Heap              |


Key Differences:
| Aspect                 | C++                                             | Python                                |
| ---------------------- | ----------------------------------------------- | ------------------------------------- |
| Manual memory control  | Yes (stack/heap with `new`, `delete`, `alloca`) | No — memory managed automatically     |
| True stack allocation  | Yes (with stack arrays or `alloca`)             | No — all objects/lists are heap-based |
| Type safety            | Strongly typed                                  | Dynamically typed                     |
| Heap handling          | Manual with `new` / `delete`                    | Automatic (via garbage collection)    |
| Flexibility at runtime | Needs `new` for dynamic allocation              | All lists/arrays are dynamic          |
