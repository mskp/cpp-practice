#include<iostream>
#include<stdarg.h>

using std::cin;
using std::cout;

int max_number(int no_of_args, ...) {
    int maximum = 0;

    va_list(array);
    va_start(array, no_of_args);
    int *arr = new int[no_of_args];
    arr = (int*)array;

    for (int i = 0; i < no_of_args; i++)
        if(arr[i] > maximum)
            maximum = arr[i];

    va_end(array);
    delete[] arr;
    return maximum;
}

int main() {
    cout << max_number(5, 34, 67, 89, 12, 4);
    return 0;
}