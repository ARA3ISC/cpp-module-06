#include <iostream>
#include <cstdlib> // for strtod function

int main() {


    const char* str = "+inff";
    char* end;
    double value = strtod(str, &end);

    if (str == end) {
         std::cout << end << std::endl;
        std::cout << "Invalid conversion." << std::endl;
    } else {
        std::cout << "Converted value: " << value << std::endl;
    }

    return 0;
}
