// kfz.h:   Definition der Basisklasse Kfz und
//          der abgeleiteten Klasse Pkw und Lkw
// --------------------------------------------------------
#ifndef _KFZ_H_
#define _KFZ_H_

#include <iostream>
#include <string>
using namespace std;

class Kfz
{
  private:
     long   nr;
     string hersteller;
     
  public:                        
     Kfz( long n = 0L, const string& herst = "");
     Kfz::~Kfz();
                                    // Zugriffsmethoden:
     long  getNr(void) const { return nr; }
     void  setNr( long n ) { nr = n; }
      
     const string& getHerst() const { return hersteller; }
     void  setHerst(const string& h){ hersteller = h; }
     
     void display( void ) const;   // Fahrzeug anzeigen
};
 
class Pkw : public Kfz
{
   private:
     string pkwTyp; 
     bool   schiebe;
   
   public:                        
     Pkw(const string& tp, bool sd, 
         int n = 0 , const string& h = "");
     Pkw::~Pkw();
     
                                      // Zugriffsmethoden:
     const string& getTyp( void ) const { return pkwTyp; }
     void  setTyp( const string s ) { pkwTyp = s; }

     bool  getSchiebe( void ) const { return schiebe; }
     void  setSchiebe( bool d ) { schiebe = d; }

     void  display( void ) const;
};

class Lkw : public Kfz
{
  private:
     int    achsen;
     double tonnen;
 
  public:
     Lkw::Lkw( int a, double t, int n, const string& hs);
     Lkw::~Lkw();
      
     void   setAchsen( int l)  { achsen = l;}
     int    getAchsen() const  { return achsen; }
     void   setKapazitaet( double t) { tonnen = t;}
     double getKapazitaet() const    { return tonnen; }

     void display() const;
};
#endif
