#include "Person.h"

Person::Person()
{
    this->name = NULL;
}

Person::Person(char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Person::Person(const Person& other)
{
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
}

Person& Person::operator=(const Person& other)
{
    if(this != &other)
    {
        delete[] this->name;

        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
    }

    return *this;
}

Person::~Person()
{
    delete [] this-> name;
}

 char* Person::getName() const
{
    return this-> name;
}

void Person::setName(char* name)
{
    delete[] this->name;

    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

