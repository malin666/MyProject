// ----------------------------------------------------
// product.h : Definition der Klassen 
//             Product, PackedFood und UnpackedFood
// ----------------------------------------------------
#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Product
{
  private:
    long   bar;
    string bez;
  
  public:
    Product(long b = 0L, const string& s = "")
    : bar(b), bez(s)
    {  }

    void setCode(long b) { bar = b; }
    long getCode() const { return bar; }

    void  setBez(const string& s) { bez = s; }
    const string& getBez() const  { return bez; }

    void scanner()
    {
       cout << "\nBar-Code:     "; cin >> bar;
       cout <<   "Bezeichnung:  "; cin >> bez;
       cin.sync(); cin.clear();
    }

    void printer() const
    { 
       cout << "\n-------------------------------"
            << "\nBar-Code:     " << bar
            << "\nBezeichnung:  " << bez
            << endl;
    }
};

class PackedFood : public Product
{
  private:
    double stk_preis;
  
  public:
    PackedFood(double p = 0.0, long b = 0L, const string& s = "")
    : Product(b, s), stk_preis(p)
    {}

    void   setPreis(double p) { stk_preis = p;}
    double getPreis()const    { return stk_preis; }

    void scanner()
    {
        Product::scanner();
        cout << "Stückpreis:    "; cin >> stk_preis;
    }

    void printer() const
    { 
       Product::printer();
       cout << fixed << setprecision(2)
            << "Preis:        " << stk_preis << endl;
    }
};

class UnpackedFood : public Product
{
  private:
    double gew;
    double kg_preis;

  public:
    UnpackedFood(double g=0.0, double p=0.0, long b=0L, const string& s="")
    : Product(b, s), gew(g), kg_preis(p)
    {}
  
    void   setGew(double g) { gew = g;}
    double getGew()const    { return gew; }

    void   setPreis(double p) { kg_preis = p;}
    double getPreis()const    { return kg_preis; }

    void scanner()
    {
        Product::scanner();
        cout << "Gewicht(kg): "; cin >> gew;
        cout << "Preis/kg:    "; cin >> kg_preis;
        cin.sync(); cin.clear();
    }

    void printer() const
    { 
       Product::printer();
       cout << fixed << setprecision(2)
            << "Preis pro Kg: " << kg_preis
            << "\nGewicht:      " << gew
            << "\nEndpreis:     " << kg_preis * gew
            << endl;
    }
};

#endif
