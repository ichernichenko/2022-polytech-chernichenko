#include <iostream>
#include <cassert>
#include <cstring>

const char* mul(const char* a, const char*b);

int main()
{   std::cout << "5 * 5 = " << mul("5", "5") << std::endl;
    std::cout << "0 * 5 = " << mul("0", "5") << std::endl;
    std::cout << "5 * 0 = " << mul("5", "0") << std::endl;
    std::cout << "55 * 55 = " << mul("55", "55") << std::endl;
    
    // strcmp - функция сравнения строк
    assert(strcmp(mul("5", "5"), "25") == 0);
    assert(strcmp(mul("0", "5"), "0") == 0);
    assert(strcmp(mul("5", "0"), "0") == 0);
    assert(strcmp(mul("55", "55"), "3025") == 0);

    return 0;
}
