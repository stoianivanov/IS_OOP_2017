#pragma once
#include <iostream>
#include <cstring>
class Person{
private:
    char* name;
public:
    Person();
    Person(char* name);
    Person(const Person& other);
    Person& operator=(const Person& other);
    ~Person();

    char* getName() const;
    void setName(char* name);
};

