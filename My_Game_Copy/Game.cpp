

#include "Game.h"
#include "Kbhit.h"


//#include <sys/ioctl.h>
#include <termios.h>
#include <ncurses.h>
#include <ctime>
#include <iostream>

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
        cout << frameCount / (mktime(timeInfo) - startTime) << " FPS" << endl;
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
    //cout << currentTime << endl;
    /*if(currentTime < 33.33)
        return;*/
    
    frameCount++;
    lastTime = mktime(timeInfo);
}




