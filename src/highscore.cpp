#include "highscore.h"
#include <iostream>
#include <fstream>

int Hscore::DisplayHS(){
    std::ifstream readf;
    int temp;

    readf.open("highscore.txt");
    while (readf >> temp){
        return temp;
    }
    readf.close();

};

void Hscore::UpdateHSList(int score){

    int status = 0;
    int temp;
    std::ifstream readf;
    readf.open("highscore.txt");
    while (readf >> temp){
        if (score > temp) status++;
    }
    readf.close();

    if (status != 0){
        std::ofstream myfile;
        myfile.open ("highscore.txt");
        myfile << score << "\n";
        myfile.close();
    }

}