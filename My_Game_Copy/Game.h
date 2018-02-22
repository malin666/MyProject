

#ifndef GAME_H
#define GAME_H

class Game {
public:
    bool run(void);
private:
    bool getInput(char *c);
    bool kbhit();
    int currentTime;
    int startTime;
    int endTime;
    int frames;
};

#endif /* GAME_H */
