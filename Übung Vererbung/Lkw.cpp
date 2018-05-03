#include "Lkw.h"
#include <iostream>

using namespace std;

Lkw::Lkw(int a, double t, int n, const string& hs):Kfz(n, hs), achsen(a), ladeKapazitaet(t){
    cout << "Ich baue ein Objekt com Typ Lkw auf." << endl;
}

Lkw::~Lkw(){
    cout << "Ich zerstoere ein Objekt vom Typ Lkw" << endl;
}
void Lkw::display() const{
    Kfz::display();
    
    cout << "Achsen:          " << achsen;
   cout << "\nLadekapazitaet: " << ladeKapazitaet << endl << endl;
}
