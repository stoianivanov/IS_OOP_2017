#pragma once
#include <cstring>
class Employee{
public:
    Employee(int id = 0, char* = null, char* = null, int salary= 0);
    Employee(const Employee& other);
    Employee& operator=(const Employee& other);
    ~Employee();

    int getId()const;
    char* getFirstName() const;
    char* getLastName() const;
    int getSalary() const;

    void setId(const int id);
    void setFirstName(const char* firstName);
    void setLastName(const char* lastName);
    void setSalary(const int salary);

    int getAnnualSalary();
    void raiseSalary(const int percent);
    void description();

private:
    void copy(const Employee& other);
    void destroy();

    int id;
    char* firstName;
    char * lastName;
    int salary;
};
