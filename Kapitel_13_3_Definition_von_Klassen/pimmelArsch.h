

#ifndef PIMMELARSCH_H
#define PIMMELARSCH_H
/* Eine Klasse wird im allgemeinen in zwei Files definiert: Das eine File ist
 * sogennante Headerdatei, innerhalb derer sich die Klassendefinition
 * einschliesslich der Deklaration der Memberfunktion(en) befindet. Das andere
 * File ist die zugehoerige CPP-Datei und enthaelt unter anderen die Definitionen
 * der Memberfunktionen.
 * 
 * Die Definition einer Klasse beginnt hierbei mit dem Dchluesselwort class
 * gefolgt vom Namen der Klasse, hier pimmelArsch. Es wird bei der Deklaration unterschieden
 * zwischen private und public elementen, private Elemente sind von aussen
 * nicht zugaenglich, public sind nach aussen verfuegbar und bilden die
 * oeffentliche SChnittstelle. Private und Public Bereiche koennen beliebig
 * gemischt. Voreinstellung ist private !
 * 
 * Namenskonvention:
 * 
 * Die Namen von Klassen beginnen im allgemeinen min einem
 * grossbuchstaben, die von Elementen mit einem Kleinbuchstaben. Elemente
 * verschiedener Klassen duerfen natuerlich identische Namen besitzen.
 */  
class pimmelArsch {
public:
    
private:
    int x, y, z;

};

#endif /* PIMMELARSCH_H */

