/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   table.h
 * Author: malin
 *
 * Created on February 5, 2018, 1:49 PM
 */

#ifndef TABLE_H
#define TABLE_H

class table {
public:
    table();
    table(const table& orig);
    virtual ~table();
    void addObject(int, int, int);
    void printTable(void);
    void tab();
private:
    int x, y, z, pTable, zahler;
};

#endif /* TABLE_H */

