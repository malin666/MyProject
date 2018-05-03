// ----------------------------------------------------- 
// konto.h: 
// Definition der Klassen Konto, GiroKonto und SparKonto.
// ----------------------------------------------------- 
#ifndef _KONTO_H
#define _KONTO_H

#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

class Konto
{
  private:
    string name;
    unsigned long nr;
    double stand;
  public:
    Konto(const string& s = "X", unsigned long n = 1111111L,
          double st = 0.0)
    : name(s), nr(n), stand(st)
    { } 

    const string& getName() const  { return name; }
    void  setName(const string& n) { name = n;}

    unsigned long getNr() const { return nr; }
    void setNr(unsigned long n) { nr = n; }

    double getStand() const   { return stand; }
    void   setStand(double st){ stand = st; }
      
    void display()
    { 
       cout << fixed << setprecision(2)
            << "----------------------------------------\n"
            << "Kontoinhaber:       " << name  << endl
            << "Kontonummer:        " << nr    << endl
            << "Kontostand:         " << stand << endl;
    }
};
 
class GiroKonto : public Konto
{
  private:
    double limit;            // Überziehungslimit
    double soll;             // Soll-Zinssatz
  public:
    GiroKonto(const string& s = "X", unsigned long n = 1111111L,
              double st = 0.0, double li = 0.0, double so = 0.0)
    : Konto(s, n, st), limit(li), soll(so)
    { } 
                               // Zugriffsmethoden:
    double getLimit() const { return limit; }
    void   setLimit(double lt){ limit = lt; }
    
    double getSoll() const { return soll; }
    void   setSoll(double sl){ soll = sl; }

    void display()
    {   
        Konto::display();
        cout << fixed << setprecision(2)
             << "Ueberziehungslimit: " << limit << endl
             << "Soll-Zinssatz:      " << soll  << endl
             << "----------------------------------\n"
             << endl << endl;
    }
};
 
class SparKonto: public Konto
{
  private:
    double haben;            // Habens-Zinssatz
  public:
    SparKonto(const string& s = "X", unsigned long n = 1111111L,
              double st = 0.0, double ha = 0.0)
    : Konto(s, n, st), haben(ha)
    { } 

    // Zugriffsmethoden.
    double getHaben() const { return haben; }
    void   setHaben(double hb){ haben = hb; }

    void display()
    {   
        Konto::display();

        cout << fixed << setprecision(2)
             << "Habens-Zinssatz:    " << haben << endl
             << "----------------------------------\n"
             << endl << endl;
    }
};

#endif