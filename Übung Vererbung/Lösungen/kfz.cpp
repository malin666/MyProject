// ------------------------------------------------------
// kfz.cpp
// Implementierung der Methoden von Kfz, Pkw  und Lkw
// ------------------------------------------------------
#include "kfz.h"

// Die Methoden der Basisklasse Kfz:
// ------------------------------------------------------
Kfz::Kfz( long n, const string& herst)
{
    cout << "Ich baue ein Objekt vom Typ Kfz auf."
         << endl;
    nr = n;
    hersteller = herst;
}

Kfz::~Kfz()
{
    cout << "Ich zerstöre ein Objekt vom Typ Kfz" << endl; 
}

void Kfz::display() const
{
    cout << "\n---------------------------- "
         << "\nKfz-Nummer:   " << nr
         << "\nHersteller:   " << hersteller
         << endl;
}

// Die Methoden der abgeleiteten Klasse Pkw:
// -------------------------------------------------------
Pkw::Pkw(const string& tp, bool sd, int n, const string& hs)
    : Kfz( n, hs), pkwTyp( tp ), schiebe( sd ) 
{
   cout << "Ich baue ein Objekt vom Typ Pkw auf." << endl;
}

Pkw::~Pkw()
{
    cout << "\nIch zerstöre ein Objekt vom Typ Pkw" << endl; 
}

void Pkw::display( void) const
{
   Kfz::display();            // Methode der Basisklasse

   cout <<   "Typ:          " << pkwTyp
        << "\nSchiebedach:  ";  
   if(schiebe)
       cout << "ja "<< endl;
   else
       cout << "nein " << endl;
}

// Die Methoden der abgeleiteten Klasse Lkw:
// ----------------------------------------------------
Lkw::Lkw( int a, double t, int n, const string& hs)
        : Kfz( n, hs), achsen( a ), tonnen( t ) 
{
   cout << "Ich baue ein Objekt vom Typ Lkw auf." << endl;
}

Lkw::~Lkw()
{
    cout << "\nIch zerstoere ein Objekt vom Typ Lkw" << endl; 
}


void Lkw::display() const
{
    Kfz::display();

    cout <<   "Achsen:       " << achsen
         << "\nKapazitaet:   " << tonnen << " Tonnen"
         << endl;
}