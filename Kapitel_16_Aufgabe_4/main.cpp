/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on March 5, 2018, 11:26 AM
 */

#include <cstdlib>
#include <iostream>
#include "TelList.h"


using namespace std;



/*
 * 
 */
int main(int argc, char** argv) {

    TelList tl;
    
    string name="Stefan", nr="123456", leer;
    string name2="Adam", nr2="987654321";
    string name3="Adamus", nr3="567567567";
    
    tl.append(name, nr);
    tl.append(name2, nr2);
    tl.append(name3, nr3);
    tl.append(name3, nr3);
    
    cout << "count" << tl.getCount() << endl;
    tl.print();
    //tl.erase(name2);
    tl.print();
    tl.print(name3);
    
    return 0;
}

