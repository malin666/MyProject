

#include "Game.h"
#include "Kbhit.h"


#include <sys/ioctl.h>
#include <termios.h>
#include <ncurses.h>

using namespace std;

bool Game::run(){
    
    char key = ' ';
    
    
    while(key != 'q'){
        
        while(!getInput(&key)){
            
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




