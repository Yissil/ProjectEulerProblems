#include <iostream>
#include <charconv>
#include <array>
 
int main()
{
    std::array<char, 10> str{"42"};
    int result[str.size() + 1];
    std::from_chars(str.data(), str.data()+str.size(), result);
    std::cout << result;
}