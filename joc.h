//
// Created by User on 22-Dec-21.
//

#ifndef UNTITLED_JOC_H
#define UNTITLED_JOC_H


#include <string>
#include <vector>
#include <memory>
#include "DLC.h"

class joc {
    std::string name, genre, patch;
    float size; //Pret in RON si dimensiunea in GB
    int release_year, downloads;
    std::vector<std::shared_ptr<DLC>> extensii;
    float price;
    int game_id;
    static int game_idmax;

    friend class Builder_joc;

public:

    std::shared_ptr<joc> clone() const;

    //Constructorul fara parametri
    joc();

    //Constructorul cu parametri
    joc(const std::string &name, const std::string &genre, const std::string &patch, float size, int releaseYear,
        int downloads, float price);

    //Constructorul de copiere
    joc(const joc &copie);

    //Destructor
    virtual ~joc();

    //Operatorul egal
    joc &operator=(const joc &copie);

    friend std::ostream &operator<<(std::ostream &os, const joc &joc);

    void sale(float procent_reducere);

    void actualizare(float dimensiune, std::string versiune);

    float getPrice() const;

    int getGameId() const;

    void adaugare_dlc(std::shared_ptr<DLC> dlc);

    joc(int i);

    void afisare_extensii() const;


};


#endif //UNTITLED_JOC_H
