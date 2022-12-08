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
    std::cout << length("hello world");
    assert(length("a") == 1);
    assert(length("ab") == 2);
    assert(length("") == 0);
    assert(length("hello world") == 11);
    assert(length(nullptr) == 0);

    return 0;
}