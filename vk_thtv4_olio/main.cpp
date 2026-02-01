#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Asiakas a("ella",2000);
    a.getNimi();
    a.showSaldo();
    a.talletus(100);
    a.nosto(50);
    a.showSaldo();
    a.luotonNosto(500);
    a.luotonMaksu(250);
    return 0;
}
