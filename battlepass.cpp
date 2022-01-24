//
// Created by User on 22-Jan-22.
//

#include "battlepass.h"

template<class T, class Y, class U, class P>
battlepass<T, Y, U, P>::battlepass(const std::string &numeDlc, float pret, int nrDescarcari, T reward1, Y reward2,
                                   U reward3,
                                   P reward4):DLC(numeDlc, pret, nrDescarcari), reward1(reward1), reward2(reward2),
                                              reward3(reward3), reward4(reward4) {}

template<class T, class Y, class U, class P>
void battlepass<T, Y, U, P>::afisare() {

    std::cout << " nume_battlepass: " << nume_dlc << " pret: " << pret << " nr_descarcari: " << nr_descarcari
              << " Primul reward: " << reward1 << " al doilea reward: " << reward2
              << " al treilea reward: " << reward3 << "al patrulea reward" << reward4;
}

template<class T, class Y, class U, class P>
void battlepass<T, Y, U, P>::inflatie(float valoare_inflatie) {
    if (valoare_inflatie >= 10)
        this->pret = this->pret + (this->pret / 10) * int(valoare_inflatie / 10);

}

template
class battlepass<int, int, int, int>;

template
class battlepass<int, int, int, std::string>;

template
class battlepass<int, int, std::string, std::string>;

template
class battlepass<int, std::string, std::string, std::string>;

template
class battlepass<std::string, std::string, std::string, std::string>;
