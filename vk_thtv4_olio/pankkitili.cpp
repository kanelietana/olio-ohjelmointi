#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili(string n) : omistaja(n)
{
    cout<<"Pankkitili konstruktori omistajalle "<<n<<endl;
}

double Pankkitili::getBalance()
{
    cout<<saldo<<endl;
    return saldo;
}

bool Pankkitili::deposit(double a)
{
    saldo += a;
    cout<<"p.deposit"<<endl;
    cout<<"Tilille talletettu "<<a<<" euroa "<<"ja uusi saldo on "<<saldo<<endl;
    return true;
}

bool Pankkitili::withdraw(double a)
{
    cout<<"p.withdraw"<<endl;
    if (a<=saldo)
    {
        saldo -= a;
        cout<<"Tililta nostettu "<<a<<" euroa "<<"ja uusi saldo on "<<saldo<<endl;
        return true;
    }
    else if (a<0)
    {
        cout<<"Et voi nostaa negatiivista summaa"<<endl;
        return false;
    }
    else
    {
        cout<<"Et voi nostaa enemman, kuin tililla on"<<endl;
        return false;
    }
}
