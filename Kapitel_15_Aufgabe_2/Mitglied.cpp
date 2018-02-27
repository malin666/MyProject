/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mitglied.cpp
 * Author: malin
 * 
 * Created on February 27, 2018, 10:19 AM
 */

#include "Mitglied.h"
#include <iostream>

using namespace std;



Mitglied* Mitglied::ptrVorstand;

Mitglied::Mitglied() {
}

Mitglied::Mitglied(std::string name, Datum date, int nr):name(name), geb(date), mitgliedsNummer(nr){     
}

Mitglied::Mitglied(std::string name, int tag, int monat, int jahr, int nr):
                    name(name), mitgliedsNummer(nr),geb(tag, monat, jahr){
    
}

void Mitglied::setName(std::string name){
    this->name=name;
}

/*void Mitglied::setGeb(Datum date){
    geb=date;
}*/

void Mitglied::setNummer(int nr){
    this->mitgliedsNummer=nr;
}

string Mitglied::getName(){
    return this->name;
}

const Datum Mitglied::getGeb(){
    return this->geb;
}

int Mitglied::getNummer(){
    return this->mitgliedsNummer;
}

void Mitglied::print(){
    cout << "Name: " << this->name << endl <<
            "Geb: " << this->geb.asString() << endl <<
            "Nr: " << this->mitgliedsNummer << endl;
}

void Mitglied::setVorstand(Mitglied* ptr=NULL){
    
    Mitglied::ptrVorstand=ptr;
}

Mitglied* Mitglied::getVostand(){
   return ptrVorstand;
}
/*Mitglied::Mitglied(const Mitglied& orig) {
}

Mitglied::~Mitglied() {
}*/

