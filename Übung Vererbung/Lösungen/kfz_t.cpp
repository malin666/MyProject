// ----------------------------------------------------- 
// kfz_t.cpp : Zum Testen der Basisklasse Kfz und
//             der abgeleiteten Klassen Pkw und Lkw.
// ----------------------------------------------------- 

#include "kfz.h"
 
int main()
{
    Lkw brummi(5, 7.5, 1111, "Volvo");
    brummi.display();

    char c;
    cout << "\nPkw-Objekt erzeugen? (j/n) ";
    cin >> c;
    if( c == 'j' || c == 'J')
    {
       const Pkw kaefer("New Beatle", false, 3421, "VW");
       kaefer.display();  
    }
 
    cout << "\nKfz-Objekt erzeugen? (j/n) ";
    cin >> c;
    if( c == 'j' || c == 'J')
    {
       const Kfz oldi(3421, "Rolls Royce");
       oldi.display();  
    }

    return 0;
}
