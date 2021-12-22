//
// Created by User on 22-Dec-21.
//

#ifndef UNTITLED_JOC_H
#define UNTITLED_JOC_H


#include <string>
#include <vector>
#include "DLC.h"

class joc {
    std::string name, genre, patch;
    float size; //Pret in RON si dimensiunea in GB
    int release_year, downloads;
    std::vector<DLC> extensii;
public:


    float price;
    int game_id;

    //Constructorul fara parametri
    joc();


    //Constructorul cu parametri
    joc(const std::string &name, const std::string &genre, const std::string &patch, float size, int releaseYear,
        int downloads, float price, int gameId);

    //Constructorul de copiere
    joc(const joc &copie);

    //Destructor
    ~joc();

    //Operatorul egal
    joc &operator=(const joc &copie);

    friend std::ostream &operator<<(std::ostream &os, const joc &joc);

    void sale(float procent_reducere);

    void actualizare(float dimensiune, std::string versiune);

    joc(int i);
};


#endif //UNTITLED_JOC_H
