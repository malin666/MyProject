/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 20, 2018, 10:58 PM
 */

#include <cstdlib>
#include <iostream>
#include "Datum.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Datum datum;
    Datum const datum1;
    
    datum.setDatum();
    
    
    cout << datum.asString() << endl;
    datum1.print();
    datum.print();
    datum.isEqual(datum1);
    datum.isLess(datum1);
    return 0;
}
