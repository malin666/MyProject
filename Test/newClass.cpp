/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.cpp
 * Author: malin
 * 
 * Created on February 1, 2018, 1:55 PM
 */

#include "newClass.h"
#include "handler.h"
#include <iostream>
#include <string>


newClass::newClass(){
    
}
newClass::newClass(int x, int y, std::string ID){
    this->x = x;
    this->y = y;
    this->ID = ID;
}
newClass::~newClass(){
    
}
void newClass::setX(int x){
    this->x=x;
}

void newClass::setY(int y){
    this->y=y;
}

int newClass::getX(){
    return x;
    
}

int newClass::getY(){
    return y;
}
int newClass::getArea(){
    this->x * this->y;
}
void newClass::setID(std::string id){
    this->ID = id;
}
std::string newClass::getID(){
    return ID;
}


