//
// Created by User on 22-Dec-21.
//

#include "DLC.h"


DLC::DLC() : nume_dlc("-"), pret(0), nr_descarcari(0) {}

DLC::DLC(const std::string &numeDlc, float pret, int nrDescarcari) : nume_dlc(numeDlc), pret(pret),
                                                                     nr_descarcari(nrDescarcari) {}

std::ostream &operator<<(std::ostream &os, const DLC &dlc) {
    os << " nume_dlc: " << dlc.nume_dlc << " pret: " << dlc.pret << " nr_descarcari: " << dlc.nr_descarcari;
    return os << std::endl;
}

void DLC::inflatie(float valoare_inflatie) {
    if (valoare_inflatie > 0)
        this->pret = this->pret + this->pret * valoare_inflatie / 100;
    else
        this->pret = this->pret + this->pret * valoare_inflatie / 200; // pretul scade mai incet decat inflatia
}

DLC::~DLC() {

}

std::shared_ptr<DLC> DLC::clone() const {
    return std::make_shared<DLC>(*this);
}
