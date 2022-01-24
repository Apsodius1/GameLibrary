//
// Created by User on 22-Jan-22.
//

#ifndef UNTITLED_BATTLEPASS_H
#define UNTITLED_BATTLEPASS_H

#include <iostream>
#include "DLC.h"

template<class T, class Y, class U, class P>
class battlepass : public DLC {
private:
    T reward1; //pot fi bani(in joc) sau iteme
    Y reward2;
    U reward3;
    P reward4;

public:
    battlepass() = default;

    battlepass(const std::string &numeDlc, float pret, int nrDescarcari, T reward1, Y reward2, U reward3, P reward4);

    void afisare();

    void inflatie(float valoare_inflatie) override;
};


#endif //UNTITLED_BATTLEPASS_H
