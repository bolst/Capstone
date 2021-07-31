#include "highscore.h"
#include <iostream>
#include <fstream>

int Hscore::DisplayHS(){
    std::ifstream readf;
    int temp;
    readf.open("highscore.txt");
    if (readf){
        while (readf >> temp) {return temp;}
    }
    else {
        std::ofstream myfile;
        myfile.open("highscore.txt");
        myfile << "0\n";
        myfile.close();
        return 0;
    }
    readf.close();

};

void Hscore::UpdateHSList(int score){

    int status = 0;
    int temp;
    std::ifstream readf;
    readf.open("highscore.txt");

    if (readf){    
        while (readf >> temp)
            if (score > temp) status++;
    }
    else {
            std::ofstream newfile;
            newfile.open ("highscore.txt");
            newfile << score << "\n";
            newfile.close();
    }

    readf.close();

    if (status != 0){
        std::ofstream myfile;
        myfile.open ("highscore.txt");
        myfile << score << "\n";
        myfile.close();
    }

}
