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

Artikel artGlobal(1,"artGlobal", 1);

void test(){
    Artikel artTest1(2,"artTest1", 2);
    Artikel artTest2(3, "artTest2", 3);
    artGlobal.print();
    artTest1.print();
    artTest2.print();
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    Artikel artLocal;
    test();
    test();
    
    return 0;
}

