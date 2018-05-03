// ------------------------------------------------------
// product_t.cpp
// Test der Klassen Product, PackedFood und UnpackedFood.
// ------------------------------------------------------

#include "product.h"

int main()
{
   Product p1(12345L, "Mehl"), p2;

   p1.printer();            // Erstes Produkt ausgeben
 
   p2.setBez("Zucker");     // Datenelemente setzen
   p2.setCode(543221);

   p2.printer();            // Zweites Produkt ausgeben

                            // Verpackte Produkte:
   PackedFood pf1(0.49, 23456, "Salz"), pf2;

   pf1.printer();    // Erstes verpacktes Produkt ausgeben

   cout << "\nDaten eines verpackten Produkts eingeben: ";
   pf2.scanner();           // Datenelemente des 2. einlesen
   pf2.printer();           // und ausgeben

   UnpackedFood pu1(1.5, 1.69, 98765, "Trauben"), pu2;

   pu1.printer();    // Erstes unverpacktes Produkt ausgeben

   cout << "\nDaten eines unverpackten Produkts eingeben: ";
   pu2.scanner();           // Datenelemente des 2. einlesen
   pu2.printer();           // und ausgeben.

   cout << "\n-------------------------------"
        << "\n-------------------------------"
        << "\nUnd nochmal im einzelnen: \n"
        << fixed << setprecision(2)
        << "\nBar-Code:     " << pu2.getCode()
        << "\nBezeichnung:  " << pu2.getBez()
        << "\nPreis pro Kg: " << pu2.getPreis()
        << "\nGewicht:      " << pu2.getGew()
        << "\nEndpreis:     " << pu2.getPreis() * pu2.getGew()
        << endl;

   return 0;
}

