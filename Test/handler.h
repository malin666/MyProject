/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   handler.h
 * Author: malin
 *
 * Created on February 2, 2018, 8:55 AM
 */

#ifndef HANDLER_H
#define HANDLER_H
#include <string>

using namespace std;

class handler {
public:
    handler();
    handler(const handler& orig);
    virtual ~handler();
    int getObject();
    void setObject(int);
    void addObject(int);
    void removeObject(int);
    int printTable();
    
private:
    int object;
    int ObjectList;
};

#endif /* HANDLER_H */

