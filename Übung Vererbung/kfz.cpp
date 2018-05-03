// kfz.cpp
// Implementierung der Methoden von Kfz und Pkw
// ------------------------------------------------------
#include "kfz.h"

Kfz::Kfz( long n, const string& herst)
{
    cout << "Ich baue ein Objekt vom Typ Kfz auf" << endl;
    nr = n;
    hersteller = herst;
}

void Kfz::display() const
{
    cout << "\n---------------------------- "
         << "\nKfz-Nummer:   " << nr
         << "\nHersteller:   " << hersteller
         << endl;
}

Kfz::~Kfz(){
    cout << "Ich zerstoere ein Objekt vom Typ Kfz" << endl;
}

// Erste Version des Konstruktors von Pkw
// ---------------------------------------
// Pkw::Pkw(const string& tp, bool sd, int n, const string& hs)
// {
//    setNr(n);       // Anfangswerte f�r Datenelemente
//    setHerst(hs);   // der Basisklasse.
//    
//    pkwTyp  = tp;   // Anfangswerte f�r Datenelemente
//    schiebe = sd;   // der abgeleiteten Klasse
// }


// Zweite Version des Konstruktors von Pkw
// ----------------------------------------------------
// Pkw::Pkw(const string& tp, bool sd, int n, const string& hs)
//     : Kfz( n, hs)
// {
//    pkwTyp  = tp;     // Anfangswerte f�r Datenelemente
//    schiebe = sd;     // der abgeleiteten Klasse
// }


// Dritte Version des Konstruktors von Pkw
// ----------------------------------------------------
Pkw::Pkw(const string& tp, bool sd, int n, const string& hs)
    : Kfz( n, hs), pkwTyp(tp), schiebe(sd) 
{
    cout << "Ich baue ein Objekt vom Typ Pkw auf" << endl;
   // Hier ist nichts mehr zu tun.
}


void Pkw::display( void) const
{
   Kfz::display();            // Methode der Basisklasse

   cout << "Typ:          " << pkwTyp;
   cout << "\nSchiebedach: ";  
   if(schiebe)
       cout << " ja "<< endl;
   else
       cout << " nein " << endl;
}

Pkw::~Pkw(){
    cout << "Ich zerstoere ein Objekt vom Typ Pkw" << endl;
}
