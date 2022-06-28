#include<iostream>
#include<string>

using std::cin;
using std::cout;

std::string reverse_string(std::string the_string) {
    std::string reversed_str = "";
    int str_len = the_string.length();

    for (int i = str_len - 1; i >= 0; i--)
        reversed_str += the_string[i];

    return reversed_str;
}

// std::string reverse_string(std::string the_string) {
//     int str_len = the_string.length();

//     for (int i = 0; i < str_len/2; i++) {
//         char temp = the_string[i];
//         the_string[i] = the_string[str_len - 1 - i];
//         the_string[str_len - 1 - i] = temp;
//     }

//     return the_string;
// }

int main() {
    cout << reverse_string("astonish");
}