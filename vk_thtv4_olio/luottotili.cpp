#include "luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili(string n, double a) : Pankkitili(n)
{
    cout<<"Luottotili konstruktori omistajalle "<<n<<", jonka luottoraja on "<<a<<endl;
}

bool Luottotili::deposit(double a)
{
    cout<<"l.deposit"<<endl;
    if (a <= 0)
    {
        cout<<"Et voi maksaa negatiivisia summia"<<endl;
        return false;
    }
    else if (saldo + a > 0)
    {
        cout<<"Luottotilin saldo ei saa olla yli 0"<<endl;
        return false;
    }
    else
    {
        saldo += a;
        cout<<"Maksoit velkaa "<<a<<" euroa ja velkaa on jaljella "<<saldo<<endl;
        return true;
    }
}

bool Luottotili::withdraw(double a)
{
    cout<<"l.withdraw"<<endl;
    if (a <= 0)
    {
        cout<<"Et voi nostaa negatiivisia summia"<<endl;
        return false;
    }
    else if (saldo - a > -luottoRaja)
    {
        cout<<"Et voi nostaa yli luottorajan"<<endl;
        return false;
    }
    else
    {
        saldo -= a;
        cout<<"Nostit "<<a<<" euroa ja velkasi on nyt "<<saldo<<endl;
        return true;
    }

}
