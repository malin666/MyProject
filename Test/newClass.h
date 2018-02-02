/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newClass.h
 * Author: malin
 *
 * Created on February 1, 2018, 1:55 PM
 */

#ifndef NEWCLASS_H
#define NEWCLASS_H

#include <string>
#include <cstdlib>


class newClass {
public:
    
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    int getArea();
    std::string getID();
    void setID(std::string);
    newClass();
    newClass(int, int, std::string);
    ~newClass();
    
    
private:
    int x;
    int y;
    
    std::string ID;
    

};

#endif /* NEWCLASS_H */

