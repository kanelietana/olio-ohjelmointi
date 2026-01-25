#include <iostream>
#include "chef.h"

using namespace std;

Chef::Chef(string n) : chefName(n)
{
    cout<<"Chef "<<n<<" constructor"<<endl;
}

Chef::~Chef() { cout<<"Chef desctructor"<<endl; }


string Chef::getName()
{
    cout<<"getname"<<endl;
    return chefName;
}

int Chef::makeSalad(int a)
{
    int portions = a / 5;
    cout<<"Chef "<<chefName<<" with "<<a<<" ingredients"<<" can make "<<portions<<" salad portions"<<endl;
    return portions;
}

int Chef::makeSoup(int a)
{
    int portions = a / 3;
    cout<<"Chef "<<chefName<<" with "<<a<<" ingredients"<<" can make "<<portions<<" soup portions"<<endl;
    return portions;
}
