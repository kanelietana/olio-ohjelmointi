#include "seuraaja.h"
#include <iostream>
#include <string>
using namespace std;

Seuraaja::Seuraaja() {
    cout<<"Seuraaja konstruktori"<<endl;
}

Seuraaja::Seuraaja(string s) {
    cout<<"S parametri konstruktori"<<endl;
    nimi = s;
}

string Seuraaja::getNimi() {
    cout<<"getNimi metodi"<<endl;
    return nimi;
}

void Seuraaja::paivitys(string viesti) {
    cout<<nimi<<" sai viestin "<<viesti<<endl;
}
