#include "notifikaattori.h"
#include "seuraaja.h"

using namespace std;

int main()
{
    Notifikaattori n;
    Seuraaja* s1 = new Seuraaja("Kaija");
    Seuraaja* s2 = new Seuraaja("Maija");
    Seuraaja* s3 = new Seuraaja("Saija");

    n.tulosta();
    n.postita("Terve");

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();

    n.postita("Terve taas");

    n.poista(s1);
    n.poista(s2);
    n.poista(s3);
    return 0;
}
