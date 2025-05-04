import array

# a) Fixed Stack-Dynamic (simulate using tuple)
fixed_stack = (1, 2, 3, 4, 5)
print("Fixed Stack-Dynamic:", fixed_stack)

# b) Stack-Dynamic (function-local list, created with runtime input)
def stack_dynamic():
    size = int(input("Enter size for Stack-Dynamic: "))
    stack_arr = [i for i in range(size)]
    print("Stack-Dynamic:", stack_arr)

stack_dynamic()

# c) Fixed Heap-Dynamic (simulate with array.array of fixed size)
fixed_heap = array.array('i', [10, 20, 30, 40, 50])
print("Fixed Heap-Dynamic:", fixed_heap)

# d) Heap-Dynamic (runtime input size, stored on heap)
size = int(input("Enter size for Heap-Dynamic: "))
heap_dynamic = [i + 100 for i in range(size)]
print("Heap-Dynamic:", heap_dynamic)