#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <cstdlib>

using namespace std;

class italianChef : public Chef
{
public:
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza();

};

#endif // ITALIANCHEF_H
