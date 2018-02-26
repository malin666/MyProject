
#include <iostream>

class tc
{
    int i;
public:
    int getI();
    void setI(int);
};

void tc::setI(int i)
{
    this->i=i;
}

int tc::getI()
{
    return this->i;
}



int main(int argc, char** argv) {
    
    // Die Klasse tc soll nun in unterschiedlicher Weise als Objekt instantiiert
    // werden.
    //
    // 1. Möglichkeit: Programmspeicher
    tc a;
    // Damit ist ein Objekt der Klasse tc mit Namen a eingerichtet und kann verwendet
    // werden. Auf die Elemente des Objekts, wie z.B. die Memberfunktionen getI()
    // und setI() lässt sich unter Verwendung des Punktoperators zugreifen:
    a.setI(123);    // setzt den Inhalt der Membervariablen i des Objekts a und
    a.getI();       // liest ihn wieder aus.
    // Das Objekt a gehört "fest" zum Programm und wird im entsprechenden Speicherbereich
    // abgelegt.
    //
    // Mehr Flexibilität bietet die sog. dynamische Speicherverwaltung.
    // Hierbei ist das Vorgehen in etwa das folgende:
    // Zunächst definieren wir einen Pointer aPtr vom Typ tc:
    
    tc* aPtr;
    aPtr = new tc();    // instantiiert dann ein Objekt der Klasse tc
                        // auf dem Heap und weißt dessen Adresse der
                        // Pointervariablen aPtr zu.
    
    //Zugriff:
    aPtr->setI(123);
    std::cout << aPtr->getI() << std::endl;
    delete aPtr;        // ruft den Destruktor von tc auf und gibt anschließend den
                        // Speicherplatz des referenzierten Objekts frei.
    return 0;
}
