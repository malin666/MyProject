/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 27, 2018, 10:13 AM
 */

#include <cstdlib>
#include <iostream>
#include "Datum.h"
#include "Mitglied.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Datum dtm;
    //cout << dtm.asString() << endl;
    dtm.setDatum();
    //dtm.print();
    
    Mitglied mitglied("Stefan", dtm, 15);
    mitglied.setNummer(123);
    mitglied.print();
    
    Mitglied mitglied2("Dupa", 1, 5, 10, 1534);
    //mitglied2.setGeb(dtm);
    if(mitglied2.getNummer()==1534)
        mitglied2.print();
    
    mitglied2.print();
    //Mitglied *ptr = &mitglied;
    
    
    
    
    
    
    return 0;
}

