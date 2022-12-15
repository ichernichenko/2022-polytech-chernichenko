#include <cassert>
#include <iostream>

unsigned int length(const char* str)
{
    if (str == nullptr)
    {
        return 0;
    }

    int length = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        length = length + 1;
    }
    return length;
}

int main()
{
    char arr[] = {'a', 'b', '\0'};
    char arr1[] = "ab"; // равносильное объявление массива символов
    std::cout << length(arr1) << "\n";
    std::cout << length("hello world");
    
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);

    return 0;
}