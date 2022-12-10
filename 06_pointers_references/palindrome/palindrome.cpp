#include <iostream>
#include <cassert>

unsigned int length(const char *str)
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

bool palindrome(const char *str)
{
    int n = length(str);
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    assert(palindrome("a") == true);
    assert(palindrome("aba") == true);
    assert(palindrome(" ") == true);
    assert(palindrome("hohoho") == false);
    assert(palindrome(nullptr) == true);

    return 0;
}