#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "luottotili.h"
#include "pankkitili.h"
#include <string>


using namespace std;

class Asiakas
{
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas(string n, double a);

    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);

};

#endif // ASIAKAS_H
