/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   punkt.h
 * Author: malin
 *
 * Created on February 5, 2018, 8:46 AM
 */

#ifndef PUNKT_H
#define PUNKT_H



class punkt {
public:
    punkt();
    punkt(const punkt& orig);
    virtual ~punkt();
    
    // set get x y z
    void setX(double);
    double getX(void);
    void setY(double);
    double getY(void);
    void setZ(double);
    double getZ(void);
    
    //set get x1 y1 z1
    void setX1(double);
    double getX1(void);
    void setY1(double);
    double getY1(void);
    void setZ1(double);
    double getZ1(void);
    
    //set delta
    double deltaX(double);
    double deltaY(double);
    double deltaZ(double);
    
    //get length from delta x y z
    void getLength(double, double, double);
    
    // Set points
    void setPunkt(double, double, double);
    void setPunkt1(double, double, double);
    
    // Print Points
    void printPunkte(void);
    double length(void);
            
private:
    double x, x1;
    double y, y1;
    double z, z1;
    
};

#endif /* PUNKT_H */

