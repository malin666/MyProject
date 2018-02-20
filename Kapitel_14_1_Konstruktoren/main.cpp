/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * 
 * File:   main.cpp
 * Author: achigir
 *
 * Created on 16. Oktober 2017, 15:04
 * Beschreibung: xyz
 */
#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <time.h>
#include <ctime>
//#include "conio.h"

using namespace std;

/*  Konstruktoren und Destruktoren.
 
 werden meist für automatische Initialisierung der neu angelegten Objekte verwendet (z.B. neues Konto
 inkl Name und Kontostand. Oder ihne Angaben Name leer, ontostand 0. 
 
 In traditionellen Programmiersprachen wird mit der Definition einer Variablen lediglich der Speicher
 für diese Variable reserviert. Es bleibt dem Programmierer überlassen, diese Variablen mit zuverlässigen
 Anfangswerten zu initialisieren. entsprechend besitzt ein Objekt der Klasse Konto keine gültige Werte,
 solange nicht die Memberfunktion init aufgerufen wurde. Dies kann zu gravierenden Fehlern führen.
 Um dies zu vermeiden wird im C++ bei der Initialisierung eines Objekts automatisch eine 
 Initialisierungsfunktion ausgeführt. Damit kann sichergestellt werden, dass Objekte stets mit einer gültigen
 Initialisierung arbeiten. Die speziellen Methoden, die dieser Initialisierung dienen, heißen Konstruktoren.
 
 Deklaration von Konstruktoren
 
 Konstruktoren sind erkennbar:
 1. Der Name des Konstruktor ist derselbe wie der Name der Klasse.
 2. Besitzt kein Rückgabetyp (auch nicht void).
 3. Die deklaration von Konstruktoren erfolgt im allgemeinen in public Bereich der Klasse. 
 4. Wie andere Funktionen sind auch Konstruktoren überladbar. Die Konstruktoren einer Klasse 
 unterscheiden sich in ihrer Signatur. 
 5. Damit können verschiedene Objekte, die aus einer Klasse entstanden sind, unterschiedlich initialisiert 
 werden. 
 6. Neben der Initialisierung können Konstruktoren Aufgaben übernehmen, wie z.B. das Öffnen einer Datei
 bzw Datenbank oder Reservierung von Speicher etc. 
 
 Delegation von Konstruktoren.
 
 Wenn verschiedene Konstruktoren einer Klasse dieselben Aufgaben erledigen müssen,
 z.B. die Überprüfung von Eingaben, so können die entsprechenden Anweisungen in jeden
 Konstruktor kopiert werden. Alternativ (und meist besser) ist die Erstellung einer
 Hilfsmethode, die die gemeinsamen Anweisungen enthält und von den Konstruktoren
 aufgerufen wird. Ab C++ 2011 besteht für diesen Zweck die Möglichkeit der Delegation
 von Konstruktoren, also den Aufruf eines Konstruktors von einem anderen Konstruktor auf.
 Der Syntax hierzu ist der folgende: der Aufruf eines anderen Konstruktors wird getrennt
 durch Doppelpunkt dem Kopf des Konstruktors angehängt. Beispielsweise ist folgendes 
 mit der Klasse Konto möglich:
 
 konto::konto(const string& k_name):konto(k_name, 1111111, 0.0){...};
 
 Destruktoren
 
 Objekte, die durch einen Konstruktor ordnungsgemäß aufgebaut wurden, müssen in 
 ebenso geregelter Weise weider abgebaut werden. Zu diesen Aufräumarbeiten gehören
 z.B. das Schließen geöffneter Dateien, Speicherfreigabe etc. Diese Aufgaben werden 
 von s.g. Destruktoren erledigt. 
 
 Deklaration und Syntax Destruktor
 
 Der Destruktor einer Klasse besitzt genau wie der Konstgruktor den Namen der Klasse,
 allerdings mit einer Tilde (~) vor dem Namen. Auch der destruktor besitzt keinen
 Rückgabetyp bzw vielmehr kein Argument. Es kann entsprechend nur einen Destruktor 
 geben, und er kann nicht überladen werden. 
 
 Wird kein expliziter Destruktor definiert, so erzeugt der Compiler einen default
 Destruktor. Eine explizite Definition eines Destruktors ist immer dann notwendig, 
 wenn wenn bestimmte Aktionen des Konstruktors wieder rückgängig gemacht werden müssen. 
 Hat Konstruktor z.B. eine Datei geöffnet, dann macht der Destruktor das Teil wieder
 dicht. 
 
 In unserer Klasse Konto ist zur Zeit noch keine Konstruktorfunktionalität notwendig.
 Die Definition eines entsprechend leeren Destruktorswäre also konto::~konto(){};
 
 Anmerkung: die einzelnen Datenelementen eines Objekts werden in umgekehrter 
 Reihenfolge zerstört, wie sie erzeugt wurden. Das zuerst angelegte Datenelement
 wird also als letztes zerstört. Wenn ein Datenelement selber Element einer Klasse
 ist, so wird auch dessen Destruktor aufgerufen. 
 
 Zum Aufruf von Destruktoren 
 
 Der Aufruf eines Destruktors erfolgt automatisch, wenn Lebensdauer eines Objekts 
 endet:
    + Bei einem Lokalen Objekt, das nicht zur Speicherklasse static gehört, am Ende 
    des Blocks, zu dem es gehört.
    + Bei einem globalen oder static definierten Objekt am Ende des Programs.
 
 InLine Funktion:
 
 Typischerweise enthalten Programme kleine Funktionen, die z.B. das Lesen oder 
 Aktualisieren einzelner Datenelemente erledigen. Nur so kan z.B. Datenkapselung
 realisiert werden. Der Aufruf dieser Funktionen beansprucht Performance (die ganze
 Geschichte mit Stack usw). Sicherung der Rücksprungadresse, Hin- und Rücksprung 
 selber usw könen aufwändiger sein, als die Funktionalität der Funktion an sich. 
 Um diesen Overhead zu vermeiden können globale Funktionen genauso wie Memberfunktionen
 inline definiert werden. Manchmal macht es der Compiler automatisch, es geht aber 
 auch manuell, indem man vor der Funktion das Wort inline gesetzt:
 
 inline void konto::display();
 
 Wichtig: da der Compiler den Anweisungsblock der inline Funktion kennen muss, sollte 
 die inline Funktion in derselben Headerdatei definiert werden, die auch die 
 Klassendefinition enthält. 
 
 "Kleine" Methoden können auch direkt in der Klassendefinition selber definiert 
 werden. Sie sind dann implizit inline, d.h. das Wort inline ist nicht notwendig. 
 
 Auch Konstruktoren und Destruktoren können inline definiert werden. 
 
 Einige Bemerkungen zu den Zugriffsmethoden / Access Modofier
 
 1. Datenelemente eines Objekts sind normalerweise in private - Bereich der Klassendefinition
 angesiedelt. Um auf sie zugreifen zu können werden wie bereits besprochen in public
 Bereich entsprechende Zugriffsmethoden definiert. 
 2. Selbstverständlich können auch diese Zugriffsmethoden inline definiert werden.
 In diesem Fall ist der Zugriff auf die privaten Membervariablen über die access 
 Modifier genauso effizient wie der derekte Zugriff, also als stünden die 
 Membervariablen in public Bereich. 
 
 Vorteile von access Modifier
 1. Access Modifier können fehlerhafte Zugriffe verhindern (durch z.B. Implementierung 
 der Bereichsüberprüfung).
 2. Zugriffsmethoden verstecken die Konkrete Implementierung. So ist es z.B. möglich,
 die Interne Darstellung von Daten nachträglich zu ändern. 
 
 Zugriff auf constant Objekte
 
 Es besteht die Möglichkeit, unter Verwendung des Scghlüsselwortes const ein konstantes 
 Objekt einer Klasse zu erzeugen. 
 Beispiel: 
 
 const konto anlage("Schulz", 5555, 50000.0);
 
 Das Objekt anlage kann anschließend nicht mehr verändert werden. Das heißt, daß
 Methoden, wie z.B. setName() nicht aufrufbar sind. Achtung! Gilt auch lesende 
 Methoden, wie getName() oder display(). Aus diesem Grund müssen Methoden, die nur
 lesend auf die Datenelemente einer Klasse zugreifen und für konstante Objekte 
 aufrufbar sind als solche gekennzeichnet werden. Dies geschiet bei der Deklaration
 UND der Definition der Funktion durch Anhängen des Schlüsselwortes const. Beispiel:
 
 unsigned long getNr() const;
 
 Anmerkung: Das Schlüsselwort const gehört zur Signatur der jeweiligen Methode. 
 Daher können für jede Memberfunktion 2 Versionen geschrieben werden: eine 
 read-only-Version, die automatisch für ein konstantes Objekt aufgerufen wird, und
 eine "normale" Version, die für nicht konstante Objekte verwendet wird.*/

class rechteck
{
    int laenge=123; //seit C++ ist direkte Initialisierung möglich. Vorher war 
    int breite=456; //es nur mittels Konstruktor möglich.
public:
    void setLaenge(int);
    void setBreite(int);
    int getLaenge();
    int getBreite();
    rechteck();
    rechteck(int);
    rechteck(int, int);
//    rechteck(int, int, int)=default;
};

int rechteck::getBreite()
{
    return this->breite;
}

int rechteck::getLaenge()
{
    return this->laenge;
}

void rechteck::setBreite(int n)
{
    this->breite=n;
}

void rechteck::setLaenge(int n)
{
    this->laenge=n;
}

rechteck::rechteck()
{
    this->laenge=2;
    this->breite=3;
}

rechteck::rechteck(int n)
{
    this->laenge=n;
    this->breite=n;
}

rechteck::rechteck(int n, int m)
{
    this->laenge=n;
    this->breite=m;
}


/* Konstruktoren.
 
 Es soll ein überladener Konstruktor entwickelt werden, der folgendes erlaubt:
 a) Objekt ohne Parameter ist ein Quadrat 1x1 erzeugt.
 b) Objekt mit zwei Parameter ist ein Rechteck mit LängexBreite.
 c) Objekt mit einem Parameter ist ein Quadrat mit Seite n.
 
 Konstruktoren heißen wie bereits erwähnt, genau wie die Klasse, und haben keinen
 Rückgabetyp (auch nicht void). */

int main(int argc, char** argv) 
{
  
    rechteck r1(2,3);
    
    /*Der compiler sucht nach dem Konstruktor mit passender Signatur. Wenn keiner
     gefunden, dann kammt eine Fehlermeldung. Explizite und emplizite 
     Typenkonvertierung bei C++ soll beachtet werden.
     Falls für eine Klasse kein Konstruktor beschrieben wird, erzeugt der Compiler
     eine Minimalversion des Konstructors (default Konstruktor). Dieser setzt
     allerdings keine Anfangswerte. Wenn mindestens ein eigener Konstruktor 
     definiert, so ist der Deafault Konstruktor flöten. Hihi ;)*/

    
cout << r1.getLaenge() << ", " << r1.getBreite() << endl;
    
    return 0;
}


// Hausaufgabe: Erweitern Sie die Klasse Rechteck für den Gebrauch als Vorlage
//              für konstante und nicht konstante Objekte. 



/*Satndardmethoden
 
 In jeder Klasse sind vier Standardmethoden automatisch vorhanden:
 + Der Default-Konstruktor
 + Der Destruktor
 + Der Kopierkonstruktor
 + Die Zuweisung
 
 Diese Standardmethoden können durch eigene Definitionen ersetzt werden. Wie die 
 Beispielkonto zeigt, benutzt der Compiler den Standardkonstruktor nur dann, wenn
 vom Programmierer kein Konstruktor definiert ist. 
 
 Der Kopierkonstruktor...
 
 ...initialisiert ein Objekt mit einem anderen Objekt selben Typs. Er wird automatisch 
 aufgerufen, wenn zur Initialisierung ein zweites bereits existierendes Objekt*/
/* Der KopierKonstruktor initialisiert ein Objekt mit einem anderen Objekt
 * desselben Typs. Er wird automatisch aufgerufen, wenn zur Initialisierung
 * ein zweites bereits eexistierendes Objekt angegeben wird.
 * Beispiel:
 * konto meinKonto("Merkel, Angela", 666, 1000.00);
 * konto deinKonto(meinKonto);      //In diesem Fall wird der Kopierkonstruktor
 *                                  //aufgerufen.
 * Hier wird das Objekt deinKonto initialisiert mit dem Objekt meinKonto durch
 * Aufruf des Kopier-Konstruktors. Dabei wird elementweise kopiert. Konkret:
 * deinkKonto.name = meinKonto.name;
 * deinKonto.nr = meinKonto.nr;
 * deinKonto.stand = meinKonto.stand;
 * 
 * Bemerkung: 
 * Der Kopierkonstruktor eines Objekts wird auch aufgerufen wenn ein Objekt eine
 * Funktion "call by value" uebergeben wird. Beim Aufruf der Funktion wird der
 * Parameter neu erzeugt und mit dem Argument-Objekt initializiert.
 * 
 * Die Zuweisung
 * Ein Objekt kann einem anderen Objekt des gleichs Typs zugewiesen werden.
 * Beispiel:
 * seinKonto = yourKonto;
 * 
 * Auch hier werden die Datenelemente des Objekts yourKonto in die entsprechenden
 * Datenelemente des Objekts seinKonto kopiert. Im Gegensatz zur Initialisierung
 * mit dem Kopier-Konstruktor erfolgt die Zuweisung jedoch stets an ein bereits
 * existierendes Objekt.
 * 
 * Standardmethoden kontrollieren
 * C++11 ermoeglicht die explizite Aktivierung von Standardmethoden und die
 * explizite Deaktivierung von Methoden. Dazu wird in der Deklaration einer Methode
 * das Schluesselwort default bzw. das Schluesselwort delete verwendet.
 * 
 * 
 * Standardmethoden aktivieren:
 * Wenn eine Klasse einen Konstruktor mit Parametern definiert, erzeugt der
 * Compiler wie gesagt nicht mehr automatisch einen Default-Konstruktor.
 * Der Entwickler muss in diesem Fall einen solchen Default-Konstruktor
 * selber definieren, wenn er zur Verfuegung stehen soll. Mit C++11 ist es 
 * moeglich, den Compiler anzuweisen, die Standardversion einer Methode zu
 * erzeugen. Dazu genuet es, in der Deklaration der Standardmethode
 * am Ende die Auszeichnung =default; einzufuegen.
 * Beispiel:
 * tc()=default; weist den Compiler an, fuer die Klasse tc den Default-Konstruktor
 * zu erzeugen.
 * 
 * Methoden deaktivieren:
 * Der Compiler deaktiviert eine Methode, wenn sie mit der Auszeichnung
 * =delete deklariert wird. Beispielweise ist es nicht immer sinnvoll,
 * dass die Objekte einer Klasse kopierbar sind. Um das Kopieren von Objekten
 * zu "verbieten", genuegt es, den Kopierkonstruktor auf =delete zu setzen und 
 * damit zu deaktivieren. Identifiziert wird die jeweils zu deaktivierende
 * Methode durch ihre Signatur. Der Kopier-Konstruktor besitzt zum Beispiel
 * als Signatur eine Read-Only Referenz auf das Objekt, dass kopiert werden 
 * soll. Die Deaktivierung des Kopier-Konstruktors einer Klasse mit dem
 * klingenden Namen tc wuerde zum Beispiel wie folgt lauten:
 * tc(const tc& src)=delete;
 * Bemerkung: Alternativ kann natuerlich die Deklaration des Kopier-Konstruktors
 * in den private-Bereich geschoben werden. Dann ist der ebenfalls deaktiviert.
 * In diesem Zusammenhang ist es sinnvoll, neben dem Kopier-Konstruktor auch
 * die Zuweisung zu deaktivieren. Die Zuweisung ist eine Funktion mit dem
 * Namen operator=.
 * 
 * Methoden, die keine Standartmethoden sind, koennen ebenfalls deaktiviert
 * werden (s. hierzu die Datei defaultDelete.cpp).
 * 
 * Zugriff auf das aktuelle Objekt
 * Eine Elementfunktion kann auf jedes Element eines Objekts zugreifen, ohne 
 * dass dabei konkret ein Objekt anzugeben ist. Sie arbeitet also stets
 * mit dem Objekt, fuer das sie aufgerufen wurde bzw. von welchem Objekt genau
 * sie aufgerufen wurde bzw. mit welchem Objekt sie im Moment arbeitet?
 * Zur Loesung dieses Problems erhaelt die Funktion bei Ihrem Aufruf
 * einen versteckten Zeiger vom aufrufenden Objekt, der auf das aufrufende
 * Objekt zeigt. Diese Adresse steht in der aufgerufenen Funktion als
 * konstanter Zeiger mit Namen this zur Verfuegung. Ist diesesObjekt der 
 * Name des aufrufenden Objekts vom Typ tc, dann lautet die Deklaration
 * von this wie folgt:
 * tc * const this = &diesesObjekt;
 * Der name this ist ein Schluesselwort. Da this ein konstanter Zeiger ist, 
 * kann er selbst nicht versetzt werden. Der Zeiger this erlaubt also immer nur
 * den Zugriff auf das aktuelle Objekt.
 * 
 * Zur Verwendung von this:
 * Innerhalb einer Elementfunktion kann mit Hilfe des this-Zeigers ein
 * Objekt wie folgt angesprochen werden:
 * this->data;
 * this->funct();
 */