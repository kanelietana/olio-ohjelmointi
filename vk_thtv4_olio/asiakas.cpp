#include "asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(string n, double a) : nimi(n), kayttotili(n), luottotili(n, a)
{
    cout<<"Asiakkaan "<<n<<" henkilokohtainen luottoraja on "<<a<<endl;
}

string Asiakas::getNimi()
{
    cout<<"Asiakkaan nimi on "<<nimi<<endl;
    return nimi;
}

void Asiakas::showSaldo()
{
    kayttotili.getBalance();
}

bool Asiakas::talletus(double a)
{
    return kayttotili.deposit(a);
}

bool Asiakas::nosto(double a)
{
    return kayttotili.withdraw(a);
}

bool Asiakas::luotonMaksu(double a)
{
    return luottotili.deposit(a);
}

bool Asiakas::luotonNosto(double a)
{
    return luottotili.withdraw(a);
}
