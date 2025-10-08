#include <iostream>
#define SIZE 5

void printArr(int *arr, int size);
int* doubleArr(int *arr, int size);
int* doubleArrNew(const int *arr, int size);

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    printArr(arr, SIZE);
    doubleArr(arr, SIZE);
    printArr(arr, SIZE);

    int *pArr = doubleArr(arr, SIZE);
    printArr(pArr, SIZE);

    std::cout << "Print new array\n";
    int *pArr2 = doubleArrNew(arr, SIZE);
    printArr(pArr2, SIZE);

    return 0;
}
void printArr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int* doubleArr(int *arr, int size){
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    return arr;
}

int* doubleArrNew(const int *arr, int size){
    int *new_array = new int[size];
    for(int i = 0; i < size; i++) {
        new_array[i] = arr[i] * 2;
    }

    return new_array;
}

/*
new operator allocates memory
to deallocate, use delete address;
delete [] pArr2 //the empty brackets are only for arrays
dynamic memory allocation is the process of assigning the emory space during th eexecution time / runtime

advantages of dynamicmemory:
reduces compilation time
dynamic lifetime instead of being deleted in function
dynamic memory is on the heap which is larger than the stack
complex data structures have efficiant dynamic allocation

only dynamically created variables / objects can be deleted
better to create objects in heap, and not in stack bc it can cause stack overflow (those who know)
create object with
    ClassName* pObject = newClassName(); - with args
    ClassName* pObject = newClassName; - no arg
*/