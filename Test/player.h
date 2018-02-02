/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   player.h
 * Author: malin
 *
 * Created on February 2, 2018, 10:19 AM
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player {
public:
    player(int, int, std::string);
    /*player(const player& orig);
    virtual ~player();*/
    
private:
    std::string ID;
    int x;
    int y;
    int velX;
    int velY;
    
};

#endif /* PLAYER_H */

