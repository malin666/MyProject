/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: malin
 *
 * Created on February 5, 2018, 2:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class punkt{
private:
    int x;
    int y;
    int z;
   
public:
    //Access Modifier
    int getX();
    int getY();
    int getZ();
    void setX(int);
    void setY(int);
    void setZ(int);
    
};
class linie{
private:
        punkt ptnAnfang;
        punkt ptnEnde;
public:
    void setAnfang(int, int, int);
    void setEnde(int, int, int);
    long getLength();
    
};

void linie::setAnfang(int x0, int y0, int z0){
    ptnAnfang.setX(x0);
    ptnAnfang.setX(y0);
    ptnAnfang.setX(z0);
}

void linie::setEnde(int x, int y, int z){
    ptnEnde.setX(x);
    ptnEnde.setX(y);
    ptnEnde.setX(z);
}
    
void punkt::setX(int n){
    this->x=n;
}

void punkt::setY(int n){
    this->y=n;
}

void punkt::setZ(int n){
    this->z=n;
}

int punkt::getX(){
    return this->x;
}

int punkt::getY(){
        return this->y;
    }

int punkt::getZ(){
    return this->z;
}

/*
 * 
 */
int main(int argc, char** argv) {

punkt a;
punkt b;

a.setX(0);
a.setY(0);
a.setZ(0);

b.setX(1);
b.setY(2);
b.setZ(3);




    return 0;
}

