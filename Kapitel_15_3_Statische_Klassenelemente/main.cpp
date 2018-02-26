/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 26, 2018, 2:45 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /*
     * Im allgemeinen besitz jedes Objekt seine eigenen Eigenschaften
     * Die Datenelemente von zwei verschiedenen Objekten
     * werden also entschprechend an zwei unterschiedlichen Stellen
     * im Speicher abgelegt. Es gibt aber auch Daten, die von allen
     * Objekten einer Klasse gemeinsam benutzt werden sollen.
     * Beispiele:
     *  +   Kennzahlen wie Umrechnungskurse, Zinssaetze, Zeitlimits,
     * die fuer alle Objekte denselben Wert haben
     *  +   Statusinformationen wie zum |Beispiel die Anzahl
     * der existierenden Objekte einer Klasse, akuell
     * erreichte Minimal- bzw. Maximalwerte oder Zeiger
     * auf bestimmte Objekte, beispielweise Zeiger auf
     * das aktive Fenster einer Fensterklasse/
     * 
     * Moeglich weare die Realisierung als globale Variable.
     * Damit die Daten auch von der Klasse kontroliert werden
     * koennen, sollten sie dies aber nicht sein(also global),
     * sondern innerhalb einer L;asse dargestellt werden.
     * Deklariert werden solche Membervaraiablen mit dem
     * Schluesselwort static. Beispiel:
     * static double min, max;
     * Solche Membervariablen heissen statische Membervariablen.
     * 
     * Statische Datenelemente belegen Speicherplatz, auch wenn
     * zu der zugehoerigen Klasse noch kein Objekt erzeugt wurde.
     * Analog zu Memberfunktionen, die als Maschienencode
     * auch nur einmal varhanden sind, muessen statische
     * Membervariablen ausserhalb der Klassendefinition einmal
     * in einer Quelldatei einmal Definiert und initialisiert 
     * werden. Der Bezug zur Klasse ist dabei wieder durch
     * den Bereichsoperator :: gegeban.
     * Beispiel:
     * double klassenname::min = 0;
     * double klassenname::max = 123;
     * 
     * Bei dieser Definition faellt das Schluesselwort static weg.
     * Statische Elemente und Memberfunktionen einer Klasse 
     * werden im allgemeinen in derselben cpp Datei gespeichert.
     * 
     * Im Fall, dass das stataische Datenelement konstant ist
     * und einen ganzzahligen Typ hat, wird kein Speicherplatz
     * angelegt, da der Compiler den Wert der Konstanten direkt
     * einsetzen kann. Daher koennen solche statischen Elemente
     * direkt in der Klassendefinition initialisiert werden
     * und eine spaetere Definition entfaellt.
     * 
     * Anmerkungen:
     * 
     * I
     * 
     * Auf die statischen Memberfunktionen kann zugegriffen werden
     * durch
     * a)   klassenname::variablenname
     * b)   objektname.variablenname
     * 
     * II
     * 
     * Um die Encapsulation der OOP weiterhin zu gewaegrleisten
     * werden auch hier Access Modifier verwendet. Da diese
     * arbeiten muessen ohne dass ein Objekt der Klasse erzeugt wurde
     * sind auch diese mit dem Schluesselwort static zu definieren.
     * 
     * III
     * 
     * Statische Elementfunktionen sind bei ihrem Aufruf an klein 
     * Objekt
     */
    
    return 0;
}

