//#include<bits/stdc++.h>
#include<iostream>

using std::cin;
using std::cout;

/**
 * Value1 will contain the adition of value1 and value2
 * Value2 will contain the multiplication of value1 and value2
*/
template <typename T> 
void change_value(T *value1, T *value2) {
    T value_1 = *value1 + *value2;
    T value_2 = *value1 * *value2;
    value1 = &value_1;
    value2 = &value_2;
}

int main() {
    int num1(3), num2(2);
    change_value(&num1, &num2);
    cout << num1 << std::endl
         << num2;
    return 0;
}