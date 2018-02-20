/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 20, 2018, 2:18 PM
 */

#include <cstdlib>
#include <iostream>
#include "Artikel.h"

using namespace std;

Artikel art(1,"tet", 2);
Artikel art1;

/*
 * 
 */
int main(int argc, char** argv) {
    art.setArtikel(3.00,"etwas",5.0);
    art.print();
    art1.print();
    
    
    return 0;
}

