// --------------------------------------------------------
// konto_t.cpp 
// Testen der von der Klasse Konto abgeleiteten Klassen 
// GiroKonto und Sparkonto.
// --------------------------------------------------------

#include "konto.h"

int main()
{
   string s;
   double db;

   SparKonto daniel("Daniel Duesentrieb", 1234567, 2.40, 3.5);
   daniel.display();

   cout << "Neuer Name:  "; getline(cin, s);
   cout << "Neuer Habens-Zinssatz: "; cin >> db;

   daniel.setName(s);
   daniel.setHaben(db);
   daniel.display();

   GiroKonto dag("Dagobert Duck", 7654321, -1245.56, 10000, 12.9);
   dag.display();

   cout << "Neues Dispo-Limit: "; cin >> db;
   dag.setLimit(db);
   dag.display();

   return 0;
}
