// konto.h 
// Definition der Klasse Konto.
// ---------------------------------------------------

#ifndef _KONTO_   // Mehrfaches inkludieren verhindern.
#define _KONTO_

#include <iostream>
#include <string>
using namespace std;

class Konto
{
  private:              // Geschützte Elemente:
    string name;            // Kontoinhaber
    unsigned long nr;       // Kontonummer
    double stand;           // Kontostand

  public:               // Öffentliche Schnittstelle:
    bool init( const string&, unsigned long, double);
    void display();
};

#endif   //  _KONTO_