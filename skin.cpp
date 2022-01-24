//
// Created by User on 19-Jan-22.
//

#include "skin.h"

skin::skin() : culoare("-") {}

skin::skin(const std::string &numeDlc, float pret, int nrDescarcari, const std::string &culoare) : DLC(numeDlc, pret,
                                                                                                       nrDescarcari),
                                                                                                   culoare(culoare) {}

std::ostream &operator<<(std::ostream &os, const skin &skin) {
    os << static_cast<const DLC &>(skin) << " culoare: " << skin.culoare<<std::endl;
    return os;
}
void skin::inflatie(float valoare_inflatie) {
        this->pret = this->pret + this->pret * valoare_inflatie / 100; // pretul poate doar sa creasca

}
