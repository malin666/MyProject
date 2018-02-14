/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   linie.cpp
 * Author: malin
 * 
 * Created on February 6, 2018, 8:33 AM
 */

#include "linie.h"
#include "punkt.h"

linie::linie() {
}

linie::linie(const linie& orig) {
}

linie::~linie() {
}

void linie::setPunktStart(double x0, double y0, double z0){
    punktStart.setX(x0);
    punktStart.setY(y0);    
    punktStart.setZ(z0);    
    
    
} 

void linie::setPunktEnd(double x, double y, double z){
    punktEnd.setX(x);
    punktEnd.setY(y);    
    punktEnd.setZ(z);        
} 

long linie::getLength(){
    
    
}