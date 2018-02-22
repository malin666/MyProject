

#ifndef GAME_H
#define GAME_H

class Game {
public:
    bool run(void);
    void timerUpdate(void);
private:
    bool getInput(char *c);
    bool kbhit();
    double currentTime;
    double startTime;
    double lastTime;
    double frameCount;
};

#endif /* GAME_H */
