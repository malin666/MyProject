// defaultDelete.cpp 
// Methoden aktivieren oder deaktivieren.
// -----------------------------------------------------
// Achtung: Die neue Syntax von C++11 zum Aktivieren und
// Deaktivieren von Methoden mit default und delete wird
// von vielen Compilern noch nicht unterstütz!
// -----------------------------------------------------

#include <iostream>
using namespace std;

class DefaultDeleteDemo
{
    double val;
  public:
    // Default-Konstruktor aktivieren:
    DefaultDeleteDemo() = default;

    // Konstruktor mit einem Parameter für val:
    DefaultDeleteDemo( double x) { val = x; }
    // Kein ganzzahliges Argument zulassen:
    DefaultDeleteDemo( int x) = delete;

    // Kopierkonstruktor und Zuweisung nicht zulassen:
    DefaultDeleteDemo( const DefaultDeleteDemo& n) = delete;
    DefaultDeleteDemo& operator=( const DefaultDeleteDemo& n) = delete;

    // Zugriffsmethoden:
    double getVal() const { return val; }
    void setVal( double x) { val = x; }
    // Kein ganzzahliges Argument zulassen:
    void setVal( int x) = delete;
};


int main()
{
    DefaultDeleteDemo ddObj1,         // Default-Konstruktor.
                      ddObj2(2.2);    // double-Konstruktor.
    ddObj1.setVal(1.1);

    cout << "Werte:  \n"
         << ddObj1.getVal() << "   " << ddObj2.getVal() << endl;

    // Folgende Anweisungen erzeugen Fehlermeldungen des Compilers:
/*
    ddObj1 = ddObj2;                   // Keine Zuweisung.

    DefaultDeleteDemo ddObj3(ddObj2),  // Kein Kopierkonstruktor.
                      ddObj4(100);     // Kein int-Konstruktor.

    ddObj1.setVal(200);                // Keine int-Version.
*/
    return 0;
}