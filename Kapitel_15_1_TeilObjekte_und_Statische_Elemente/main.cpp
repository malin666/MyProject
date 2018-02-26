/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 26, 2018, 11:58 AM
 */

#include <cstdlib>

using namespace std;

/*
 * Teilobjekte uns statische Elemente
 * 
 * Einfuehrung:
 * Die Datenelemente einer Klasse koennen vom Typ einer anderen Klasse sein.
 * Wir haben dies bereits beobachtet in der Klasse konto in der ein Datenelement
 * vom typ string auftaucht. In diesem Fall schpricht man von einer HAT-Bezeihnung.
 * 
 * Konstruktoren:
 * Bei der Initialisierung eines Objekts, das Teilobjekte enthaelt, sind
 * mehrere Konstruktoren aufzufuehren: Einerseits der Konstruktor fuer das
 * Gesamtobjekt, andererseits die Konstruktoren der Teilobjekte. Hierbei
 * ist die Reihenfolge der Abarbeitung wichtig:
 * Zuerst werden sie Teilobjekte angelegt und initialisiert, bevor das ganze 
 * Objekt aufgebaut wird. Ohne weiteren Angaben wird fuer jedes Teiobjekt
 * standardmaessig der Default-Konstruktor ausgefuehrt.
 * 
 * Ein Problem ergibt sich dabei zum Beispiel, wenn Teilelemente, die 
 * als Konstanten definiert und bei ihrer Instantiierung sofort initialisiert
 * werden ueber den Konstruktor des Gesamtobjekts mit Initialisierungswerten
 * versorgt werden muessen. Weiterhin nachteilig ist der Verlust an Performance,
 * denn die Teilobjekte werden zunaechst durch ihren eigenen und anschliessend
 * durch den Konstruktor des Gesamtsprojekt initialisiert. Ferner koennen
 * Klassen, die keinen Defaultkonstruktor besitzen, nicht als Typ fuer Teilobjekte
 * verwendet werden.
 * 
 * Zur Loesing dieses Problems wurden die sogenannten Elementinitialisierte
 * eingefuehrt:
 *
 * Elementinitialisierer werden durch Doppelpunkt getrennt vom Konstruktor
 * der Hauptklasse und untereinander durch Kommata getrennt an den Kopf der
 * Definition des Konstruktors der Hauptklasse angehaengt.
 * Beispiel:
 *  Messwert::Messwert(double w, inst std, int min, int sek):wert(w), zeit(std, min, sek){
 *      ...
 * }
 */


int main(int argc, char** argv) {

    return 0;
}

