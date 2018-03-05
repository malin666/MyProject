/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TelList.cpp
 * Author: malin
 * 
 * Created on March 5, 2018, 11:30 AM
 */

#include "TelList.h"
#include <iostream>

using namespace std;
//Element v[MAX];


bool TelList::append(const string& name, const string& telNr){
    if(name != ""){
        v[count].name=name;
        v[count].telNr=telNr;
        count++;
        return true;
    }
    return false;
}

int TelList::search(const string& name) const{
    for(int i=0; i<MAX; i++)
        if(v[i].name==name)
            return i;
    return PSEUDO;
}

bool TelList::erase(const string& name){
    int tempVar=search(name);
    if(tempVar!=PSEUDO){
    v[tempVar].name=retrieve(tempVar-1)->name;
    count--;
    }else 
        return false;
}

void TelList::print() const{
    for(int i=0; i<MAX; i++){
        if(v[i].name!=""){
        cout << "--------------"
             << "Position: " << i << endl
             << "name: " << v[i].name << endl
             << "Nummer: " << v[i].telNr << endl;
        }
    }
}

int TelList::print(const string& name) const{
    cout << "Passende Ergebnisse: " << endl;
    for(int i=0; i<MAX; i++){
        /*if(name.compare(0, 3, v[i].name)!=0)
            cout << "Name: " << v[i].name << endl;*/
        cout << name[i] << v[i].name[i] << endl;
        //cout << v[i].name << ":" << name.compare(0, 3, v[i].name) << endl;
    }
}

