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

Artikel art;

void test(){
    art.setArtikel(5, "Artikel 2", 5);
    art.print();
    art.setArtikel(10, "Artikel 3", 10);
    art.print();
    cout << "--test() end--" << endl << endl << endl;
}
/*string eingabe(){
    long nummer;
    string name;
    double preis;
    cout << "give nr:" << endl; cin >> nummer;
    cout << "give name:" << endl; cin >> name;
    cout << "give preis:" << endl; cin >> preis;
    art.setArtikel(nummer, name, preis);
    art.print();
    return "Artikel added";
}*/

int main(int argc, char** argv) {
    
    art.print();
    
    art.setArtikel(1, "Artikel 1", 1);
    art.print();
    test();
    test();
    //eingabe();
    
    return 0;
}
