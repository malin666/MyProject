/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mitglied.h
 * Author: malin
 *
 * Created on February 27, 2018, 10:19 AM
 */

#ifndef MITGLIED_H
#define MITGLIED_H
#include "Datum.h"
#include <string>

class Mitglied {

    

public:
    Mitglied();
    Mitglied(std::string, Datum, int);
    Mitglied(std::string, const int, const int, const int, int);
    
    void setName(std::string);
    void setNummer(int);
    void setGeb(Datum);
    
    std::string getName(void);
    int getNummer(void);
    const Datum getGeb(void);
    
    void print(void);
    static Mitglied* getVostand();
    static void setVorstand(Mitglied *ptr);
    
private:
    int mitgliedsNummer;
    std::string name;
    const Datum geb;
    static Mitglied *ptrVorstand; 
    
};

#endif /* MITGLIED_H */

