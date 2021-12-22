//
// Created by User on 22-Dec-21.
//

#include "DLC.h"

DLC::DLC() : nume_dlc("?"), pret(0), nr_descarcari(0) {}

DLC::DLC(const std::string &numeDlc, float pret, int nrDescarcari) : nume_dlc(numeDlc), pret(pret),
                                                                     nr_descarcari(nrDescarcari) {}

std::ostream &operator<<(std::ostream &os, const DLC &dlc) {
    os << "nume_dlc: " << dlc.nume_dlc << " pret: " << dlc.pret << " nr_descarcari: " << dlc.nr_descarcari;
    return os << std::endl;
}
