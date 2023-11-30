#include <iostream>
#include <cstdint>

struct MyStruct {
    int x;
    int y;
};

int main() {
    std::cout << sizeof(uintptr_t*) << std::endl;

    return 0;
}
