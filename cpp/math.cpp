//#include<bits/stdc++.h>
#include<iostream>

using std::cin;
using std::cout;

bool is_even(int num) { return num % 2 == 0; }

bool is_odd(int num) { return !is_even(num); }

unsigned int power(int base, int exponent) {
    unsigned int power = base;

    for (int i = 1; i < exponent; i++) {
        power *= base;
    }
    return power;
}

bool is_prime(int num){
    if(num < 2)
        return false;
    
    else if(num == 2)
        return true;

    else if(num % 2 == 0)
        return false;

    for (int i = 3; i * i <= num; i += 2)
        if(num % i == 0)
            return false;
    
    return true;
}

int reverse_number(int num){
    int reversed{ };

    while (num != 0) {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }

    return reversed;
}

bool is_palindrome(int num) {
    return reverse_number(num) == num;
}

bool is_armstrong(int number) {
    int num(number);
    int result{ };

    while (num != 0) {
        int remainder = num % 10;
        result += power(remainder, 3);
        num /= 10;
    }
    return result == number;
}

int main() {
    // std::string isPalindrome = is_palindrome(123321) ? "True" : "False";
    // cout << isPalindrome;
    // cout << power(2, 4);
    return 0;
}