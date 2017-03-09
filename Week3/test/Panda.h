#pragma once
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class Panda
{
private:
    char* name;
    int age;
    double weight;
    double high;
    char* sex;
    int percentageofFat;
public:
   // Panda();
    Panda(char* ="tosh",int = 1223 ,double =2.5,
          double = 4.6 ,char* ="M",int =50);
    ~Panda();
    int getAge();
    void setAge(int newAge);

    char * getName();
    void setName(char* newName);
    //...
};
