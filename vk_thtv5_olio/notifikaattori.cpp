#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() {
    cout<<"Notifikaattori konstruktori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja* lisSeuraajaPtr) {
    cout<<"lisataan seuraaja"<<endl;
    if (lisSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr)
    {
        seuraajat = lisSeuraajaPtr;
        return;
    }
    lisSeuraajaPtr->next = seuraajat;
    seuraajat = lisSeuraajaPtr;
}

void Notifikaattori::poista(Seuraaja* poiSeuraajaPtr)
{
    cout<<"poista seuraaja"<<endl;
    if (poiSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr) return;
    if (seuraajat == poiSeuraajaPtr)
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* seurTempNext = seuraajat->next;
    Seuraaja* seurTempPrev = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        if (seurTempNext == poiSeuraajaPtr)
        {
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }
    if (seurTempNext == poiSeuraajaPtr)
    {
        seurTempPrev->next = nullptr;
    }
}

void Notifikaattori::tulosta()
{
    cout<<"tulosta metodi"<<endl;
    if (seuraajat == nullptr)
    {
        cout<<"Ei seuraajia"<<endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout<<seurTempNext->getNimi()<<endl;
        seurTempNext = seurTempNext->next;
    }
    cout<<seurTempNext->getNimi()<<endl;
}

void Notifikaattori::postita(string viesti)
{
    cout<<"postita metodi"<<endl;
    if (seuraajat == nullptr)
    {
        cout<<"Ei seuraajia"<<endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }
    seurTempNext->paivitys(viesti);

}
