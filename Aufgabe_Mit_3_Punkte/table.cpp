/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   table.cpp
 * Author: malin
 * 
 * Created on February 5, 2018, 1:49 PM
 */

#include "table.h"
#include <iostream>
#include <iterator>
#include <list>
#include <string>



using namespace std;

list<int> myList;
list<int>::iterator myListIterator;
int zahler=0;

table::table() {
  
}

table::table(const table& orig) {
}

table::~table() {
}

void table::addObject(int x, int y, int z){
    myList.push_back(x);
    myList.push_back(y);
    myList.push_back(z); 
}

void table::printTable(){
    for(myListIterator = myList.begin(); myListIterator != myList.end(); myListIterator++){
        cout << *myListIterator << endl;
    }
}
void tab(){
    int x=zahler;
    int tabl[x][3];
    for(int i=0; i<x; i++){
        
    }
}