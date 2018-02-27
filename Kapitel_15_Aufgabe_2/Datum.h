/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Datum.h
 * Author: malin
 *
 * Created on 6. Februar 2018, 13:31
 */

#ifndef DATUM_H
#define DATUM_H
#include <string>




class Datum {
public:
    Datum();
    Datum(int tag, int monat, int jahr);
    void setDatum();
    void setDatum(int tg, int mn, int jr);
    void setTag(int);
    void setMonat(int);
    void setJahr(int);
    int getTag() const;
    int getMonat() const;
    int getJahr() const;
    bool isEqual(const Datum&) const;
    bool isLess(const Datum&) const;
    const std::string& asString() const;
    
    void print(void) const;
    void print(void);
      
private:
    int tag;
    int monat; 
    int jahr;
    
    
};

#endif /* DATUM_H */