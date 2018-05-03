// kfz_t.cpp:  Zum Testen der Basisklasse Kfz und
//             der abgeleiteten Klasse Pkw.
// ----------------------------------------------------- 


#include "Lkw.h"
 
int main()
{
    const Pkw kaefer( "New Beatle", false, 3421, "VW" );
    kaefer.display();  
    cout << "\nUnd hier nochmal die Pkw-Nummer: " 
         << kaefer.getNr() << endl;
 
    Pkw cabrio("Carrera", true);
    cabrio.setNr(1000); 
    cabrio.setHerst("Porsche");
    cabrio.display(); 
    
    cout << "\nNur die Daten der Basisklasse: ";
    cabrio.Kfz::display();

    Lkw elkawe(1,2.0,3,"Deine Muddah");
    elkawe.display();
    
    return 0;
}
