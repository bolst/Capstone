#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <iostream>

class Hscore {
    public:
    Hscore(){};
    ~Hscore(){};

    int DisplayHS();
    float Highscore();
    void UpdateHSList(int score);
    void SetHS(int score) {_Highscore = score;}

    private:
    float _Highscore;

};

#endif