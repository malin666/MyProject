// konto_t.cpp 
// Mit Objekten der Klasse Konto arbeiten.
// ---------------------------------------------------

#include "konto.h"

/* Instanzierung:
 * 
 * Zwei Objekte mit Namen giro1 und giro2 der Klasse Konto werden erzeugt.
 * Fuer diese beiden Elemente wird jetzt der entsprechende Speicherplatz
 * reserviert. Die Objekte giro1 und giro2 bestehen ihrerselts aus den 
 * Teilobjekten name, nr und stand. Hierbei bekommt jedes Objekt seinen eigenen
 * Speicherbereich fuer seine Datenelemente. Die Memberfunktionen (hier init
 * und display) werden als MAschienencode aber nur einmal realisierert.
 * Hierzu spaeter mehr. 
 * 
 */
int main()
{
   Konto giro1, giro2; 

   /*
    * Um zum Beispiel auf die Methoden des erzeugten Objekts zugreifen zu
    * koennen wird der sogenannte Punkt-Operator werwendet:
    */
   giro1.init("Munter, Gabi", 3512345, 99.40);
   giro1.display();

//   giro1.stand += 100;   // Fehler: stand ist private

   giro2 = giro1;        // ok: Zuweisung von Objekten 
                         // m�glich. Auch eine Initialisierung per Kopierkonstruktur
                         // (spaeter mehr dazu) ist moeglich wenn Netbeans so nett
                         // war den Standardkopierkonstruktor nicht zu ueberschreiben.
   giro2.display();      // ok
 
                         // Neue Werte f�r giro2
   giro2.init("Liebig, Ernst", 3512345, 199.40);   // ok

   giro2.display(); 

   /*
    * Selbstverstaendlich koennen auch auf komplexe Objekte wie wir sie jetzt
    * erzeugt haben Referenzen definiert.
    */
   Konto& munter = giro1;  // munter ist Aliasname
                           // f�r Objekt giro1  
   munter.display();

   return 0;
}

/*
 * Anmerkungen:
 * 
 * Initialisierung von Objekten
 * 
 * Die Objekte der Klasse konto wurden bisher ohne explizite Initialisierung
 * definiert. Daher wird auch jedes Teilobjekt ohne eine explizite Initialisierung
 * erzeugt. Der string name ist daher leer, da dies in der Klasse string so
 * festgelegt ist. Der Anfangswert der beiden Variablen ist zu Anfang undefiniert.
 * Waeren diese global oder mit dem Schluesselwort static definiert, so wuerden
 * sie mit 0 initialisiert.
 * 
 * Fuer Objekte kann genau festgelegt werden, wie diese "aufgebaut" bzw. "abgebaut"
 * werden. Diese Aufgaben werden von sogenannten Konstruktoren respektive
 * Destruktoren uebernommen. Konstruktoren uebernehmen insbesondere die Initialisierung
 * von Objekten. Auch dazo spaeter mehr.
 * 
 * Ein Objekt (zum Beispiel der Klasse konto) hat wie jedes andere Objekt auch
 * eine Adresse im Hauptspeicher. Diese kann in einer entsprechenden Pointer-Variablen
 * gespeichert werden.
 * Beispiel:
 * Konto spar("Dave Ivanov", 666. 0.05);
 * Konto *ptrKonto
 * ptrKonto = &spar;
 * 
 * Ab jetzt kann ich unter Verwendung der Verweisungsoperators * und der Pointer-
 * variablen ptrKonto auf das Konto spar zugreifen. Hierbei wird den Syntax
 * (*ptrKonto).display() "abgekurzt" durch ptrKonto->display().
 * 
 * Zum abschluss noch zwei Begriffe:
 * 
 * In klassischen prozeduralen Sprachen wie C werden verschiedene Daten, die
 * die logisch zusammengehoeren, zu einem Datensatz zusammengefasst. Aus Sicht
 * der Obiektorientierten Programmierung ist solch ein Datensatz nichts anderes
 * als eine Klasse mit public Elementen. Das entsprechende Schluesselwort ist
 * struct. struct unterschieder sich von class lediglich darin, dass der Standart
 * public und nicht private sind.
 * 
 * Ferner ist die sogenannte Union definiert, aber selten verwendet. Details siehe
 * im Praxisteil.
 */