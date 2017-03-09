#include "Panda.h"


int Panda::getAge()
{
    return age;
}

void Panda::setAge( int newAge)
{
    age = newAge;
}

char* Panda::getName()
{
    return name;
}

Panda::Panda(char* newName,int newAge,double newWeight,
          double newHigh ,char* newSex,int newPercentageOfFat):
            age(newAge) , weight(newWeight),
            high(newHigh), percentageofFat(newPercentageOfFat)
{
    cout<<"Panda"<<endl;
    name = new char[strlen(newName) + 1]; //
    strcpy(name, newName);

    sex = new char[strlen(newSex) + 1];
    strcpy(sex, newSex);
}

Panda::~Panda()
{
    cout<<"~Panda";
    age = -3;
    delete[]  name;
    delete[] sex;
}
