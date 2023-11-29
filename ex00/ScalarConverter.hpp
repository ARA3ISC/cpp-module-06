#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits.h>
# include <iomanip>
# include <cmath>
# include <exception>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
    public:
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator=(const ScalarConverter& obj);
        static void convert(std::string &literal);
};

#endif