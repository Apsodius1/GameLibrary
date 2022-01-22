//
// Created by User on 22-Jan-22.
//

#include "masina.h"
#include "DLC.h"

template<class T>


masina<T>::masina() : inaltime(1), latime(1), lungime(1) {}

template<class T>
masina<T>::masina(const std::string &numeDlc, float pret, int nrDescarcari, T inaltime, T latime, T lungime):DLC(
        numeDlc, pret, nrDescarcari), inaltime(inaltime), latime(latime), lungime(lungime) {}

template<class T>
void masina<T>::afisare() {

    std::cout << " nume_dlc: " << nume_dlc << " pret: " << pret << " nr_descarcari: " << nr_descarcari << " inaltime: "
              << inaltime << " latime: " << latime
              << " lungime: " << lungime;
}


template
class masina<int>;

template
class masina<float>;