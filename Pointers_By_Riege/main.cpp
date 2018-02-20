/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 20, 2018, 1:32 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    int i=1, j;                       //int variable
    int *intPtr0=&i;                   //Pointer auf eine int variable
    int const *intPtr1;             //Pointer auf eine int variable read only
    int* const intPtr2 = &i;        //Hier kann die in der Pointervariablen gespeicherte
                                    //Adresse nicht mehr geaendert werden. Der Inhalt der
                                    //Variablen aber shon. this-Zeiger ist ein weiteres Beispiel
    int const * const intPtr3 = &i; //Read-Only Zeiger dessen Inhalt nicht
                                    //geaendert werden kann
    
    
    //*intPtr3=*intPtr3+1; // Tak Sie nie Da
    
   /*
    * Die Verwendung des this-Zeigers ist dann notwendig, wenn das aktuelle 
    * Objekt, naemlich *this, als Ganzes angeschprochen werden soll. Am haeufigsten
    * geschieht dies, um das aktuelle Objekt als Kopie oder per Referenz
    * zurueckzugeben. Die Return-Anweisung lautet dann:
    * 
    * return *this;
    * 
    */
    
    
    
    return 0;
}

