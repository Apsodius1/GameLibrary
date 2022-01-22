//
// Created by User on 22-Jan-22.
//

#ifndef UNTITLED_MASINA_H
#define UNTITLED_MASINA_H

#include <iostream>
#include "DLC.h"

template <class T>
        class masina;


template <class T>
class masina : public DLC{
private:
    T inaltime;
    T latime;
    T lungime;



public:
    masina();

    masina(const std::string &numeDlc, float pret, int nrDescarcari, T inaltime, T latime, T lungime);

    void afisare();

};



#endif //UNTITLED_MASINA_H
