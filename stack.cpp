#include "stack.h"

Stack::Stack() {
    arr = nullptr;
    size = 0;
}

Stack::Stack(const Stack& other) {
    size = other.size;
    arr = new int[size];
    std::copy(other.arr, other.arr + size, arr);
}

Stack& Stack::operator=(const Stack& other) {
    if (this != &other) {
        delete[] arr;
        size = other.size;
        arr = new int[size];
        std::copy(other.arr, other.arr + size, arr);
    }
    return *this;
}

void Stack::push(int elem) {
    int* new_arr = new int[size + 1];
    std::copy(arr, (arr + size), new_arr);
    new_arr[size] = elem;
    delete[] arr;
    arr = new_arr;
    size = size + 1;
}

int Stack::pop() {
    int boof = arr[size-1];
    int* new_arr = new int[size - 1];
    std::copy(arr, (arr + size-1), new_arr);
    delete[] arr;
    arr = new_arr;
    size = size -1;
    return boof;
}

bool Stack::isEmpty() {
    return size == 0;
}

void Stack::multiPop(int  N) {
    int n = N;
    int* new_arr = new int[size - n];
    std::copy(arr, (arr + size - n), new_arr);
    delete[] arr;
    arr = new_arr;
    size = size - n;
}

void Stack::show() {
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size)
        {
            std::cout << arr[i] << " ";
        }
        else
        {
            std::cout << arr[i] << std::endl;
        }
    }
}

Stack::~Stack()
{
    delete[] arr;
}
