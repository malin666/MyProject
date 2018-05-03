// kfz.h:   Definition der Basisklasse Kfz und
//          der abgeleiteten Klasse Pkw 
// --------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

class Kfz
{
   private:
      long   nr;
      string hersteller;
      
   public:                         // Konstruktor:
      Kfz( long n = 0L, const string& herst = "");
                                   // Zugriffsmethoden:
      long  getNr(void) const { return nr; }
      void  setNr( long n ) { nr = n; }
       
      const string& getHerst() const { return hersteller; }
      void  setHerst(const string& h){ hersteller = h; }
      
      void display( void ) const;   // Fahrzeug anzeigen
      ~Kfz();
};

class Pkw : public Kfz
{
   private:
      string pkwTyp; 
      bool   schiebe;
    
   public:                        // Konstruktor:
      Pkw( const string& tp = "", bool sd = false,
           int n = 0 , const string& h = "");
                                  // Zugriffsmethoden:
      const string& getTyp() const  { return pkwTyp; }
      void  setTyp( const string s) { pkwTyp = s; }

      bool  getSchiebe() const   { return schiebe; }
      void  setSchiebe( bool sd) { schiebe = sd; }
 
      void  display() const;
      ~Pkw();
};

