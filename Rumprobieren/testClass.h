/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testClass.h
 * Author: malin
 *
 * Created on February 20, 2018, 9:27 AM
 */

#ifndef TESTCLASS_H
#define TESTCLASS_H

class testClass {
public:
    testClass();
    testClass(int);
    testClass(int, int);
    testClass(const testClass &object);
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    virtual ~testClass();
private:
    int x;
    int y;
    testClass *object;
};

#endif /* TESTCLASS_H */

