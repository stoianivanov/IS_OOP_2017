#include "Person.h"

using namespace std;


int main()
{
    Person niki("Niki");
    //Person niki2("Jivko");
    niki = niki;
    cout<< "niki's name: " << niki.getName() << endl;
    //cout<< "niki2's name: " << niki2.getName() << endl;
    return 0;
}
