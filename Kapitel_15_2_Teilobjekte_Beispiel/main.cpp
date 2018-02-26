/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 26, 2018, 2:04 PM
 */

#include <cstdlib>

using namespace std;

class kind{     //Teilklasse
public:
    int i;
    kind(int);
};

kind::kind(int){
    this->i=i;
}

class mami{     //Oberklasse (Enthaelt 3x kind)
    const kind kindEins;
    const kind kindZwei;
    const kind kindDrei;
public:
    mami(int, int, int);
};

mami::mami(int iKindEins, int iKindZwei, int iKindDrei):kindEins(iKindEins), kindZwei(iKindZwei), kindDrei(iKindDrei){
    
}
/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

