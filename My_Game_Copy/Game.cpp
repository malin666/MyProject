

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
    
    
    
    startTime = 0;
    
    
    char key = ' ';
    
    
    while(key != 'q'){
        
        while(!getInput(&key)){
            time(&rawTime);
            timeInfo = localtime(&rawTime);
            currentTime = timeInfo->tm_gmtoff;
            long sec = (timeInfo->tm_year+1900)*8880 + timeInfo->tm_sec;
            cout << sec << endl;
        }
    }
    return true;
}

bool Game::getInput(char *c){
    Kbhit kbhit;
    initscr();  //Init ncurses
    
    if(kbhit.kbhit() == true){    
        *c = getch();   //getch from ncurses
        endwin();
        return true;
    
    }
    endwin();
    return false;
    
}




