// konto.cpp 
// Definition der Konto-Methoden init() und display().
// ---------------------------------------------------

#include "konto.h"         // Definition der Klasse
#include <iomanip>
using namespace std;

// Die Methode init() kopiert die �bergebenen Argumente
// in die privaten Elemente der Klasse.
bool Konto::init(const string& i_name,
                 unsigned long i_nr,
                 double        i_stand)
{
   if( i_name.size() < 1)     // Kein leerer Name
     return false;

   name  = i_name;
   nr    = i_nr;
   stand = i_stand;

   return true;
}

// Die Methode display() zeigt die privaten
// Daten am Bildschirm an.
void Konto::display()
{
   cout << fixed << setprecision(2) 
        << "--------------------------------------\n"
        << "Kontoinhaber:  " << name  << '\n'
        << "Kontonummer:   " << nr    << '\n'
        << "Kontostand:    " << stand << '\n'
        << "--------------------------------------\n"
        << endl;
}
