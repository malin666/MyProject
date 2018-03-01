/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on March 1, 2018, 9:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Vektoren
 * 
 * Vektoren bzw. english Arrays bestehen aus mehreren Objekten des gleichen
 * Typs, die hintereinander im Speicher abgelegt sind. Die einzelnen Objekte
 * im Vektor heissen Vektorelemente. Sie koennen ueber eine Nummer, den sogenannten
 * Index, angeschprochen werden.
 * 
 * Definition von Vektoren
 * Wie jedes andere Element muss auch ein Vektor definiert werden. Diese Definition
 * legt den Vektornamen, den Typ und die Anzahl der Vektorelemente dest. Der
 * Syntax ist dabei:
 * typ name[anzahl];
 * Dabei ist name der Name des Vektors, typ der enthaltenen Elemente
 * und anzahl ein ganzzahliger konstanter Ausdruck, der die Anzahl der Elemente
 * festlegt.
 * Beispiel:
 */
float arr[10];
/*
 * legt einen Vektor mit Namen arr an. Dieser Vektor enthaelt 10 Elemente des
 * Typs float. Benannt wird ein solcher Vektor als "Vektor mit float-elementen"
 * oder kurz "float-Vektor".
 * 
 * Ein Vektor belegt immer einen zusammenhaengenden Speicherbereich. Im Fall 
 * des Vektors arr sind dies 10 * sizeof(float) = 40 Byte.
 * Nebenbei: arr ist ein vollkommen willkuerlicher Name. Das Array koennte genauso gut
 * hans, fritz, hubert, ruetz, ... heissen.
 * 
 * Der Zugriff auf die einzelnen 10 Elemente erfolgt wie folgt:
 * arr[0]
 * arr[1[
 * arr[2]
 * .
 * .
 * .
 * arr[9]
 * 
 * Der Indexoperator benennt also das erste Elemente mit 0, das zweite mit 1
 * ind sas letztte Element mit n-1 bei einem Vektor mit n Elementen. Das heisst
 * das der Index des letzten Elements immer um 1 niedriger ist als die Anzahl
 * der Vektor enthaltenen Elemente. Als Index kann jeder ganzzahlige Ausdruck
 * verwendet werden. Der Index-Operator besitzt wie der Punkt- und der Pfeioperator
 * einen sehr hohen Vorrang.
 * 
 * Wenn zur Laufzeit eine Bereichsueberschreitung stattfindet, wierd keine Fehlermeldung
 * ausgegeben. Hier muss der Programmierer aufpassen dass er eine entsprechende
 * Bereichsueberpruefung realisiert.
 * 
 * Vektoren fassen wie gesagt gleichartige Elemente zusammen und koennen
 * bis auf spezielle Objekte und Datentypen wie void eigentlich ansonsten
 * jedem Datentyp gebildet werden. Auf Arrays von Klassen word spaeter noch
 * ausfuehrlich eingengangen.
 * 
 * Beispiel:
 */
int main(int argc, char** argv) {
    
    const int MAXANZ = 10;
    float arr[MAXANZ], x;
    int i, anz;
    
    cout << "Bitte geben Sie bis zu 10 Zahlen ein\n" << 
            "(Abbruch mit einem Buchstaben):" << endl;
    for(i=0; i<MAXANZ && cin >> x; ++i){
        arr[i]=x;
    }
    anz=i;
    cout << "Die eingebenen Zahlen waren:\n" << endl;
    for(i=0; i<anz; ++i){
        cout << setw(10) << arr[i];
    }
    
    /*
     * Zur Initialisierung von Arrays
     * Vektoren koennen bei der Definition initialisiert werden. Hierzu kann
     * zum Beispiel eine Liste mit Werten die in die einzelnen Vektorelemente
     * gespeichert werden, uebergeben werden.
     * Beispiel
     */
    int num[3] = {30, 50, 80};
    /*
     * Damit erhaelt num[0] den Wert 30, num[1] den Wert 50 und num[2] den Wert
     * 80. Wenn ein Vektor bei seiner Definition initialisiert wird, muss
     * seine Laenge nicht angegeben werden.
     * Beispiel:
     */
    int numb[] = {30, 50, 80};
    /*
     * In diesem Fall ist die Laenge des Vektors gleich der Anzahl der 
     * Initialisierungswerte. Ist die angegebene Laenge des Vektors
     * groesser als die Anzahl der uebergebenen Werte, dann wird der Rest der
     * Vektorelemente mit 0 aufgefuellt. Werden mehr Werte in der Initialisierung
     * uebergeben als in den eckigen Klammern angegeben dann wird der Rest
     * ignoriert.
     * Ein "Trick" zur Initialisierung groesserer bzw. umfangreicher Vektoren
     * ist der folgende:
     */
    int numc[10000] = {0};
    /*
     * Hier wird das erste Vektorelement mit der 0 aus der Initialisierungsliste
     * initialisiert. Die restlichen Vektorelemente werden ebenfalls mit 0
     * wie in der "Gebreuchsanweisung" oben beschrieben vorbelegt.
     * 
     * Weitere Anmerkungen
     * 1.   Vektoren, sie einen groesseren Speicherbereich belegen, sollten
     *  global oder static definiert sein
     * 2.   Ohne eine Initialisierung haben die Elemente lokal definierter
     *  Vektoren nicht notwendigerweise einen Wert. Die Initialisierung
     *  erfolgt im allgemeinen in einer Schleife.
     * 3.   Grundsaetzlich ist der Zuweisungsoperator = fuer Vektoren erstmal
     * nicht definiert. Ich kann also zum Beispiel nicht einen vill besetzten
     * Vektor v1 erzeugen und dann zum Beispiel diesen duplizieren mit
     * v2 = v1; Sowas geht standartmaessig nicht. Um den Zuweisungsoperator
     * auch auf Vektoren anwenden zu koennen muessen wir als Programmierer
     * diesen ueberladen. Dies kommt in einem spaeteren Kapitel.
     * 
     * C-Strings und die C++ Klasse string
     * 
     * Urspruenglich waren Zeichenketten (also Buchstabenketten ider Saetze etc.)
     * in C definiert als Array von char Typen. Die Vektorelemente dieser Arrays
     * enthelten die einzelnen Zeichen. Das letzte Element Enthealt eine \0
     * ASCII 0 Das Wort Matthias wuarde also zum Bespiel gespeichert als
     * 'M', 'a', 't', 't', 'h', 'i', 'a', 's', '\0'
     * Sieses Format zur Speicherung von Zeichenketten heisst C-string.
     * Das ASCII 0 am Ende eines C=Strings kann zum Beispiel fuer die Bestimmung
     * der Laenge eines Strings verwendet werden: Zunaechst laedt man die Adresse
     * das ersten Zeichens in eine Pointervariable vom Typ char. Anschliuessend
     * inkrementiert man den Inhalt dieser Variablen solangem bis sie auf \0
     * zeigt. Die Differenz zwischen dem nun in der Pointervariablen gespeicherten
     * Wert und der Adresse des ersten Zeichen des Strings geteilt durch
     * die Wordbreite zur Codierung eines char Zeichens ergibt die Laenge des 
     * Strings, also die Anzahl der enthaltenen Zeichen.
     * 
     * char name[] = "Hugo";
     * ist also aequivalent zu char name = {'H', 'u', 'g', 'o'};
     * Ein C-String ist also immer genau ein Zeichen laengen als die Anzahl der
     * enthaltenen Zeichen.
     * 
     * C-Strings heissen C-Strings, um sie von Strings, also Objekten der Klasse
     * string zu unterscheiden. Die Klasse string enthaelt eine grosse Anzahl
     * an String-Funktionalitaet, die duer C-Strings nicht unmittlebar zur Verfuegung
     * steht. Fuer C-Strings wurden in C einige Funktionen bereitgestellt. Beispiel:
     * 
     * char str1[20], str2[20] = "Ein String";
     * str 1 = str2;    //Fehler: Geht Nicht
     * //was aber geht:
     * strcpy(str1, str2);
     * Ueber die string Klasse sprechen wir einmal an einem Freitagnachmittag.
     * 
     * Klassenarrays
     *  Wie bereits gesagt koennen Arrays fuer nahezu alle Datentypen definiert
     * und verwendet werden. Die Frage ist nun: Wie das mit der
     * Initializierung / Aufruf der Konstruktoren aus?
     * Ohne explizite Initialisierung wird fuer jedes Vektorelement dessen
     * Default-Konstruktor aufgeruffen. Hat die zugrundeliegende Klasse
     * keinen Default-Konstruktor, so kann kein Array ohne explizite
     * Initialisierung erzeugt werden. Um ein Klassenarray explizit zu initialisieren,
     * ist wie gewoehnlich eine Initialisierungsliste anzugeben innerhalb derer
     * fuer jedes Element der Default-Konstruktor aufgerufen wird.
     * Fuer ein Array, welches Daten vom Typ messwert (s. vorhergehendes Kapitel)
     * speichert, wuerde das in etwa wie folgt aussehen:
     * 
     * 
     * Messwert temperaturTag[24] = {
     *
     *      Messwert(-2.5, 0, 30, 30),
     *      Messwert(3.5), 4.5,
     *      Messwert(temp1),      
     *      temp2
     * };
     * 
     * 
     * Das Array wird also mit 5 konkreten Objekten initialisiert. Fuer alle 
     * anderen Objekte wird der Defaultkonstruktor der Klasse Messwert aufgerufen.
     * Ohne explizite Festlegung der Verkorlaenge werden so viele Vektorelemente
     * angelegt, wie in der Initialisierungsliste angegeben sind. Die Public-
     * Dchnittstelle der enthaltenen Objekte kann ganz normal benutzt werden:
     * temperaturTag[2].setTime(2, 30, 21);
     * Hier sind keine weiteren Klammern notwendig, da die Operatoren
     * [] und . zwar den gleichen Vorrang haben, aber von links her zusammen-
     * gefasst werden.
     * 
     * Mehrdimensionale Vektoren
     * In C++ koennen mehrdimensionale Vektoren gebildet werden mit Prinzip
     * belibig grosser Dimension. Nach dem C++ Standard sind mindestens
     * 256 Dimensionen moeglich. Praktisch ist die maximale Anzahl Dimensionen
     * durch die Speichergroesse des Rechners eingeschraenkt. Am haeufigsten
     * werden zweidimensionale Vektoren, die sogennanten Matrizen, verwendet.
     * 
     * Beispiel einer Matrix bzw. eines zweidimensionalen Vektors:
     * 
     * float zahlen[2][3];
     * 
     * Hier wird eine Matrix definiert, die zwei Zeilen und drei Spalten hat.
     * zahlen[1][2]=123.45
     * weist dem element Nr. 3 in der zweiten Zeile den wert 123.45 zu.
     * (Achtung: Auch hier beginnt die Zaehlung bei 0!).
     * 
     * Abschliessende Bemerkung: Vektoren als Vektorelemente
     * In C++ gibt das keine spezielle Syntax fer mehrdimensionale Vektoren.
     * Vielmehr ist ein n-dimensionaler Vektor nichts anderes als ein 
     * eindimensionaler Vektor, dessen Elemente (n-1)-dimensionale Vektoren
     * sind.
     * So besitzt der obige Vektor zahlen die beiden Elemente
     * zahlen[0] und zahlen[1].
     * Jeder dieser Vektoren ist ein Vektor der Laenge 3. Sie bilden 
     * die Zeilen des zweidimensionalen Vektors zahlen.
     * 
     * Fuer mehrdimensionale Vektoren gelten daher dieselben Regeln wie fuer
     * eindimensionale Vektoren. So enthaelt die Initialisierungsliste eines 
     * zweidimensionalen Vektors die Werte der Vektorelemente, also die eindimensionalen
     * Zeilen.
     * Beispiele:
     * int arr[2][3] = {{5,0,0},{7,0,0}};
     * oder 
     * int arr[][3] = {{5}, {7}};
     * Beide Definitionen sind aequivalent. Bei einer Initialisierung kann nur die
     * Grosse der ersten Dimension weggelassen werden. Die Angabe der weiteren 
     * Dimensionen ist notwendig, da sie die Grosse eines Vektorelements bestimmt.
     * 
     * 
     * 
     * 
     */
    
    return 0;
}

