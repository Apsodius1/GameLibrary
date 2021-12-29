//
// Created by User on 22-Dec-21.
//

#ifndef UNTITLED_UTILIZATOR_H
#define UNTITLED_UTILIZATOR_H


#include <string>
#include "joc.h"

class utilizator {
    std::string username, bio;
    float balance;
    std::vector<joc> games_owned;

public:

    //Constructorul fara parametri
    utilizator();

    //Constructorul cu parametri
    utilizator(std::string username, std::string bio, float balance, int gamesOwned);

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const utilizator &utilizator);

    void schimbare_nume(std::string nume, std::string bio2);

    void cumparare_joc(joc &x);
};


#endif //UNTITLED_UTILIZATOR_H
