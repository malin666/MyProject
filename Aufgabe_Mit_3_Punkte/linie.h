/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   linie.h
 * Author: malin
 *
 * Created on February 6, 2018, 8:33 AM
 */

#ifndef LINIE_H
#define LINIE_H

class linie {
public:
    linie();
    linie(const linie& orig);
    virtual ~linie();
    void setPunktStart(double, double, double);
    void setPunktEnd(double, double, double);
    long getLength();
private:
    punkt punktStart;
    punkt punktEnd;

};

#endif /* LINIE_H */

