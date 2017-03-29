#include "Employee.h"


    Employee::Employee(int id , char* firstName , char* lastName, int salary)
    {
        this->id = id;
        strcpy(this->firstName, firstName);
        strcpy(this->lastName, lastName);
        this->salary = salary;
    }

    Employee::Employee(const Employee& other)
    {
        this->copy(other);
    }
    Employee& Employee::operator=(const Employee& other)
    {
        if(this != &other)
        {
            destroy();
            copy(other);
        }
        return *this;
    }

    void Employee::copy(const Employee& other)
    {
        this->id = other.id;
        strcpy(this->firstName, other.firstName);
        strcpy(this->lastName, other.lastName);
        this->salary = other.salary;
    }
    void Employee::destroy()
    {
        delete[] this->firstName;
        delete[] this->lastName;
    }

    Employee::~Employee()
    {
        destroy();
    }

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
