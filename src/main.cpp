#include <iostream>

class Address { public:
    std::string street;
    int building;
    Address(const std::string &s):street(s), building(6){}
};

class Person { public:
    Address *address = nullptr;
    std::string name;
    Person(Address *address_,const std::string &name_)
        :address(address_), name(name_){}
};

int main(int argc, char **argv)
{
    Address *address = new Address("5thAvenue");
    Person *person = new Person(address, "moish");
    person->address->building = 20;
    std::cout << "OK PERSON\n";
    return 0;
}
