/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 5, 2018, 8:42 AM
 */

#include <cstdlib>
#include <iostream>
#include "punkt.h"
#include "table.h"
#include <list>

using namespace std;


punkt punkt1;
punkt punkt2;
table table;

/*
 * 
 */
int main(int argc, char** argv) {
   
    
    
    punkt1.setPunkt(0.0, 0.0, 0.0);
    punkt1.setPunkt1(1.0, 0.0, 1.0);
    punkt2.setPunkt(1.0, 3.0, 4.0);
    punkt2.setPunkt1(5.0, 6.0, 7.0);
   
    punkt1.printPunkte();
    punkt2.printPunkte();
    
    /*table.addObject(1, 2, 3);
    table.addObject(4, 5, 6);
    table.printTable();*/
    
  
    
    
    return 0;
}

