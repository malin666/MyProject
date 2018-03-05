/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on March 5, 2018, 9:56 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>

#define SIZE 99

using namespace std;
int x;

long vect[SIZE];

void eingabe(){
    cout << "Bitte geben sie Zahlen ein" << endl;
    for(int i=0; i<SIZE && cin>>x; i++){
        if(x=='q'){
            break;
        }else vect[i]=x;
    }    
}

void print(){
    cout << "Printing" << endl;
    for(int i=0; i<SIZE; i++){
        cout << vect[i] << endl;
    }
}

void bubbleSort(){
    int buffer;
    cout << "Sorting..." << endl;
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE-1; j++)
        if(vect[j]>vect[j+1]){
            swap(vect[j], vect[j+1]);
        }
    }
}
/*
 * 
 */
int main(int argc, char** argv) {

    eingabe();
    print();
    bubbleSort();
    print();
            
    
    return 0;
}

