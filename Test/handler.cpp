/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handler.cpp
 * Author: malin
 * 
 * Created on February 2, 2018, 8:55 AM
 */

#include "handler.h"
#include "newClass.h"
#include <iostream>
#include <iterator>
#include <list>
#include <string>

using namespace std;

list<int> objectList;
list<int>::iterator objectListIterator;
newClass gameObject;
handler::handler() {
    
}

handler::handler(const handler& orig) {
}

handler::~handler() {
}
int handler::getObject(){
    return object;
}
void handler::setObject(int object){
    this->object = object;
}
void handler::addObject(int object){
    objectList.push_back(object);
    
}
void handler::removeObject(int){
    
}
int handler::printTable(){
    for(objectListIterator = objectList.begin();
            objectListIterator != objectList.end();
            objectListIterator++){
            cout << *objectListIterator << " ";

    }
}

