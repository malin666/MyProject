/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testClass.cpp
 * Author: malin
 * 
 * Created on February 20, 2018, 9:27 AM
 */

#include "testClass.h"

testClass::testClass() {
    this->x = 1;
    this->y = 1;
}

testClass::testClass(const testClass &object) {
    x=object.x;
    y=object.y;
}

testClass::~testClass() {
    
}

testClass::testClass(int x){
    this->x = x;
}

testClass::testClass(int x, int y){
    this->x = x;
    this->y = y;
}
int testClass::getX(){
    return this->x;
}
void testClass::setX(int x){
    this->x = x;
}

void testClass::setY(int y){
    this->y = y;
}

int testClass::getY(){
    return this->y;
}