/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Artikel.h
 * Author: malin
 *
 * Created on February 20, 2018, 2:19 PM
 */

#ifndef ARTIKEL_H
#define ARTIKEL_H
#include <string>


class Artikel {
public:
    Artikel();
    Artikel(long, const std::string&, double);
    ~Artikel();
    void init(void);
    void setArtikel(long, const std::string&, double);
    void inline setArtikelNummer(long);
    void inline setArtikelBezeichnung(const std::string&);
    void inline setVerkaufsPreis(double);
    long inline getArtikelNummer(void);
    std::string inline getArtikelBezeichnung(void);
    double inline getVerkaufsPreis(void);
    int inline getAnzahlArtikel(void);
    void print(void);
private:

    long artikelNummer;
    std::string artikelBezeichnung;
    double verkaufsPreis;
    int anzahlArtikel;
};

#endif /* ARTIKEL_H */
