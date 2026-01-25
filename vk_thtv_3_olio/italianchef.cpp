#include "italianchef.h"

using namespace std;

italianChef::italianChef(string n) : Chef(n)
{
    n = chefName;
    cout<<"italianChef "<<n<<" constructor"<<endl;
}

italianChef::~italianChef() { cout<<"italianChef destructor"<<endl; }

bool italianChef::askSecret(string salasana, int vesi , int jauhot)
{
    water = vesi;
    flour = jauhot;
    if (salasana == "pizza")
    {
        cout<<"password ok"<<endl;
        makePizza();
        return true;
    }
    else
    {
        cout<<"wrong password"<<endl;
        return false;
    }
}

int italianChef::makePizza()
{
    int portionsA = flour / 5;
    int portionsB = water / 5;
    int portions = min(portionsA, portionsB);
    cout<<"Chef "<<chefName<<" with "<<flour<<" flour and "<<water<<" can make "<<portions<<" pizzas"<<endl;
    return portions;
}
