/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Artikel.cpp
 * Author: malin
 * 
 * Created on February 20, 2018, 2:19 PM
 */

#include "Artikel.h"
#include <string>
#include <iostream>

using namespace std;



Artikel::Artikel(){
    this->artikelNummer = 0;
    this->artikelBezeichnung = "N/A";
    this->verkaufsPreis = 0.0;
    this->anzahlArtikel++;
}

Artikel::Artikel(long artikelNummer=0, const string &artikelBezeichnung="N/A", double verkaufsPreis=0.0){
    if(verkaufsPreis<0.0)
        verkaufsPreis=0.0;
    
    this->artikelNummer = artikelNummer;
    this->artikelBezeichnung = artikelBezeichnung;
    this->verkaufsPreis = verkaufsPreis;
    this->anzahlArtikel++;
}

void Artikel::init(){
    this->anzahlArtikel = 0;
}

Artikel::~Artikel() {
    cout << "Deleting Artikel" << endl;
    if(anzahlArtikel>0)
    this->anzahlArtikel--;
    
    cout << "Remaining Artikel: " << anzahlArtikel;
}

void Artikel::setArtikel(long artikelNummer=0, const string &artikelBezeichnung="N/A", double verkaufsPreis=0.0){
    if(verkaufsPreis<0.0)
        verkaufsPreis = 0.0;
    
    this->artikelNummer = artikelNummer;
    this->artikelBezeichnung = artikelBezeichnung;
    this->verkaufsPreis = verkaufsPreis;
    this->anzahlArtikel++;
}

void inline Artikel::setArtikelNummer(long artikelNummer){
    this->artikelNummer = artikelNummer;
}

void inline Artikel::setArtikelBezeichnung(const string &artikelBezeichnung){
    this->artikelBezeichnung = artikelBezeichnung;
}

void inline Artikel::setVerkaufsPreis(double verkaufsPreis){
    if(verkaufsPreis<0.0)
        verkaufsPreis = 0.0;
    this->verkaufsPreis = verkaufsPreis;
}

long inline Artikel::getArtikelNummer(){
    return this->artikelNummer;
}

string inline Artikel::getArtikelBezeichnung(){
    return this->artikelBezeichnung;
}

double inline Artikel::getVerkaufsPreis(){
    return this->verkaufsPreis;
}

int inline Artikel::getAnzahlArtikel(){
    return this->anzahlArtikel;
}

void Artikel::print(){
    
    char eingabe;
    
    cout << "------------------------" << endl
            << "Nr. " << this->artikelNummer << endl
            << "Bez. " << this->artikelBezeichnung << endl
            << "Preis. " << this->verkaufsPreis << endl
            << "Anz. " << this->anzahlArtikel << endl
            << "----------------------" << endl;
    
    cout << "Press 'q' to Continue" << endl;
    while(cin.get(eingabe)){
        if(eingabe=='q')
            break;
    }
    
}
