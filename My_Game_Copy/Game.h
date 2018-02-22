

#ifndef GAME_H
#define GAME_H

class Game {
public:
    bool run(void);
private:
    bool getInput(char *c);
    bool kbhit();
};

#endif /* GAME_H */
