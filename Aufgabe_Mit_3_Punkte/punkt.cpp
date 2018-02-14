/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   punkt.cpp
 * Author: malin
 * 
 * Created on February 5, 2018, 8:46 AM
 */

#include "punkt.h"
#include <cmath>
#include <list>

#include <iostream>
#include <string>
#include <iterator>

using namespace std;




punkt::punkt() {
}

punkt::punkt(const punkt& orig) {
}

punkt::~punkt() {
}
//set get x y z
void punkt::setX(double x){
    this->x=x;
}
double punkt::getX(void){
    return x;
}
void punkt::setY(double y){
    this->y=y;
}
double punkt::getY(void){
    return y;
}
void punkt::setZ(double z){
    this->z=z;
}
double punkt::getZ(void){
    return z;
}
//set get x1 y1 z1
void punkt::setX1(double x1){
    this->x1=x1;
}
double punkt::getX1(void){
    return x1;
}
void punkt::setY1(double y1){
    this->y1=y1;
}
double punkt::getY1(void){
    return y1;
}
void punkt::setZ1(double z1){
    this->z1=z1;
}
double punkt::getZ1(void){
    return z1;
}
double punkt::deltaX(double x){
    return x-=this->x;
}
double punkt::deltaY(double y){
    return y-=this->y;
}
double punkt::deltaZ(double z){
    return z-=this->z;
}


//Set Points
void punkt::setPunkt(double x, double y, double z){
    setX(x);
    setY(y);
    setZ(z);    
}

void punkt::setPunkt1(double x1, double y1, double z1){
    setX1(x1);
    setY1(y1);
    setZ1(z1);
}

//Get Length
double punkt::length(){
    double result = sqrt(pow(deltaX(this->x1), 2) + pow(deltaY(this->y1), 2) + pow(deltaZ(this->z1), 2));
    return result;
}

//Print Points
void punkt::printPunkte(){
    cout << "Punkt 1; " << x << ", " << y << ", " << z << endl;
    cout << "Punkt 2; " << x1 << ", " << y1 << ", " << z1 << endl;
    cout << "Length: " << length() << endl;
}



