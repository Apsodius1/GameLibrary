//
// Created by User on 19-Jan-22.
//

#include <cmath>
#include "lume.h"

lume::lume() : dimensiune(1) {}

lume::lume(const std::string &numeDlc, float pret, int nrDescarcari, int dimensiune) : DLC(numeDlc, pret, nrDescarcari),
                                                                                       dimensiune(dimensiune) {}

std::ostream &operator<<(std::ostream &os, const lume &lume) {
    os << static_cast<const DLC &>(lume) << " dimensiune: " << lume.dimensiune;
    return os;
}

void lume::inflatie(float valoare_inflatie) {
    if(valoare_inflatie > 100)
        this->pret = this->pret + this->pret * valoare_inflatie / 100;
    else
    {
        if (valoare_inflatie > 5)
            this->pret = this->pret + this->pret / 20;
        if (valoare_inflatie > 25)
            this->pret = this->pret + this->pret / 4;
        if (valoare_inflatie > 40)
            this->pret = this->pret + this->pret / 6;
        if (valoare_inflatie > 60)
            this->pret = this->pret + this->pret / 10;
        if (valoare_inflatie > 80)
            this->pret = this->pret + this->pret / 10;
        if (valoare_inflatie > 100)
            this->pret = this->pret + this->pret / 10;
        this->pret = floor(this->pret);
    }
}