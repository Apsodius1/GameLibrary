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
    utilizator(const std::string &username, const std::string &bio, float balance, int gamesOwned);

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const utilizator &utilizator);

    void schimbare_nume(std::string nume, std::string bio2);

    void cumparare_joc(int game_id, float price);
};


#endif //UNTITLED_UTILIZATOR_H
