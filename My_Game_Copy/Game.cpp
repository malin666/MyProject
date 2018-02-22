

#include "Game.h"
#include "Kbhit.h"


//#include <sys/ioctl.h>
#include <termios.h>
#include <ncurses.h>
#include <ctime>
#include <iostream>

#define GAME_SPEED 33.33

using namespace std;



time_t rawTime;
struct tm *timeInfo;

bool Game::run(){
    
    
    time(&rawTime);
    timeInfo = localtime(&rawTime);
    startTime = mktime(timeInfo) ;
    lastTime = 0;
    
    char key = ' ';
    frameCount = 0;
    
    
    while(key != 'q'){
        
        while(!getInput(&key)){
                                              
            timerUpdate();
            time(&rawTime);
            timeInfo = localtime(&rawTime);
            
        }
        cout << frameCount / ((mktime(timeInfo) - startTime)/1000) << " FPS" << endl;
        cout << "what you pressed: " << key << endl;
        cout << "frameCount: " << frameCount << endl;
    }
    
    return true;
}

bool Game::getInput(char *c){
    Kbhit kbhit;
    initscr();  //Init ncurses
    
    if(kbhit.kbhit()){    
        *c = getch();   //getch from ncurses
        endwin();
        return true;
    
    }
    endwin();
    return false;
}

void Game::timerUpdate(){
    currentTime = mktime(timeInfo) - lastTime;
    
    if(currentTime < GAME_SPEED)
        return;
    
    frameCount++;
    lastTime = mktime(timeInfo);
}




