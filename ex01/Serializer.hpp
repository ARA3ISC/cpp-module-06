#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer
{
    private:
        Serializer();
        ~Serializer();
    public:
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};

#endif