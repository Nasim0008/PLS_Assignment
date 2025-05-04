
// Author : Md Nasim Hossen

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // a) Fixed Stack-Dynamic
    int fixedStack[5] = {1, 2, 3, 4, 5};
    cout << "Fixed Stack-Dynamic: ";
    for (int i = 0; i < 5; i++)
        cout << fixedStack[i] << " ";
    cout << endl;

    // b) Stack-Dynamic (runtime size, stack allocation — using alloca)
    int size;
    cout << "Enter size for Stack-Dynamic: ";
    cin >> size;
    int *stackDynamic = (int *)alloca(size * sizeof(int));
    for (int i = 0; i < size; i++)
        stackDynamic[i] = i + 1;
    cout << "Stack-Dynamic: ";
    for (int i = 0; i < size; i++)
        cout << stackDynamic[i] << " ";
    cout << endl;

    // c) Fixed Heap-Dynamic
    int *fixedHeap = new int[5]{10, 20, 30, 40, 50};
    cout << "Fixed Heap-Dynamic: ";
    for (int i = 0; i < 5; i++)
        cout << fixedHeap[i] << " ";
    delete[] fixedHeap;
    cout << endl;

    // d) Heap-Dynamic
    cout << "Enter size for Heap-Dynamic: ";
    cin >> size;
    int *heapDynamic = new int[size];
    for (int i = 0; i < size; i++)
        heapDynamic[i] = i + 100;
    cout << "Heap-Dynamic: ";
    for (int i = 0; i < size; i++)
        cout << heapDynamic[i] << " ";
    delete[] heapDynamic;
    cout << endl;

    return 0;
}
