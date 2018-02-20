/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 13, 2018, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include "testClass.h"

using namespace std;



/*int getValueFromASM(){
    __asm__ ("mov $39, %eax;");
    asm ("mov $35, %eax;");
    asm("add $5, %eax");
    asm("sar $1, %eax");
    asm("inc %eax");            
}
int HelloASM(){
    asm("mov $len, %edx");
}*/
/*void clearScreen(){
    __asm("mov a1, 02h");
}*/

int main(int argc, char** argv) {
    
    testClass tc(1, 2);
    testClass tc1(3, 4);
    cout << "x: " << tc.getX() << " y: " << tc.getY() << endl;
    testClass tc2(tc);
    cout << "x: " << tc2.getX() << " y: " << tc2.getY() << endl;
    testClass tc3(tc1);
    cout << "x: " << tc3.getX() << " y: " << tc3.getY() << endl;
    
    /*const char *msg = "Hello World!";
    
    asm("mov $5, %eax");*/
    //cout << getValueFromASM() << endl;
   
    
    
    return 0;
}

