//
// Created by User on 19-Jan-22.
//

#include "lume.h"

lume::lume() : dimensiune(1) {}

lume::lume(const std::string &numeDlc, float pret, int nrDescarcari, int dimensiune) : DLC(numeDlc, pret, nrDescarcari),
                                                                                       dimensiune(dimensiune) {}

std::ostream &operator<<(std::ostream &os, const lume &lume) {
    os << static_cast<const DLC &>(lume) << " dimensiune: " << lume.dimensiune;
    return os;
}

void lume::inflatie(float valoare_inflatie) {
    if(valoare_inflatie > 0)
        this->pret = this->pret + this->pret /10;

}