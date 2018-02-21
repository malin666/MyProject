/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Datum.cpp
 * Author: malin
 * 
 * Created on 6. Februar 2018, 13:31
 */

#include "Datum.h"
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


time_t rawTime;
struct tm *timeInfo;

Datum::Datum(){
    this->tag = 1;
    this->monat = 1;
    this->jahr = 1;
}

void Datum::setDatum(){
time (&rawTime);
timeInfo = localtime (&rawTime);
this->tag = timeInfo->tm_mday;
this->monat = timeInfo->tm_mon+1;
this->jahr = timeInfo->tm_year+1900;

}

void Datum::setDatum(int tag, int monat, int jahr){
   this->tag = tag;
   this->monat = monat;
   this->jahr= jahr;
}

int Datum::getTag() const{
    return this->tag;
}

int Datum::getMonat() const{
    return this->monat;
}

int Datum::getJahr() const{
    return this->jahr;
}



bool Datum::isEqual(const Datum &datum) const{
    if(this->tag==datum.jahr 
            && this->monat==datum.monat 
            && this->jahr==datum.jahr){
        cout << "Date is equal to current Date" << endl;
        return true;
    }
    cout << "Dates are not equal" <<endl;
    return false;
}

bool Datum::isLess(const Datum &datum) const{
    if(datum.tag<this->tag 
            || datum.monat<this->monat 
            || datum.jahr<this->jahr){
        cout << "Date is Less than current Date" << endl;
        return true;
    }
    cout << "Date is not Less than current Date" << endl;
    return false;
}

const string& Datum::asString() const{
    string datumString;
    stringstream ss;
    ss << this->tag << "." << this->monat << "." << this->jahr;
    ss >> datumString;
    cout << datumString << endl;
    
    //return str;
}

void Datum::print() const{
    cout  << "---------------" << endl << 
           "Tag: " << tag << endl <<
           "Monat: " << monat << endl <<
           "Jahr: " << jahr << endl <<
           "---------------" << endl;
}

void Datum::print(){
   cout  << "---------------" << endl << 
           "Tag: " << tag << endl <<
           "Monat: " << monat << endl <<
           "Jahr: " << jahr << endl <<
           "---------------" << endl;
}