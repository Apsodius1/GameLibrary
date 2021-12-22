//
// Created by User on 22-Dec-21.
//

#ifndef UNTITLED_DLC_H
#define UNTITLED_DLC_H


#include <string>
#include <iostream>

class DLC {
    std::string nume_dlc;
    float pret;
    int nr_descarcari;

public:

    //Constructorul fara parametri
    DLC();

    //Constructorul cu parametri
    DLC(const std::string &numeDlc, float pret, int nrDescarcari);

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const DLC &dlc);


};


#endif //UNTITLED_DLC_H
