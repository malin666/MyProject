// tresor.h: Die Klassen Tresor und Castle
// ----------------------------------------------------------
#include <iostream>
using namespace std;
 
class Tresor
{
    private:
      int topSecret;
 
    protected:
      int secret; 
 
      void setTopSecret( int n){ topSecret = n;}
      int  getTopSecret() const { return topSecret;}
 
      void setSecret( int n){ secret = n;}
      int  getSecret() const { return secret;}
 
    public:  
      int notSecret;
 
      Tresor()
      { topSecret = 100; secret = 10; notSecret = 0; }
};
 
class Castle : public Tresor
{
    public:
      Castle()
      {
       // topSecret = 10;       // Fehler, da private
        setTopSecret(10);       // ok, da protected
        secret = 1;             // ok, da protected
        notSecret = 0;          // ok, da public
      }
      void test()
      {
      // top.Secret = 200;          // Fehler, da private
         setTopSecret(200);         // ok, da protected
         secret = 20;               // ok, da protected
         notSecret = 2;             // ok, da public
      }

      void display()
      {
          cout << "\nTop-Secret: " << getTopSecret() 
               << "\nSecret:     " << secret
               << "\nNot-Secret: " << notSecret
               << endl;
      }
 };

