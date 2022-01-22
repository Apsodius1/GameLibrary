//
// Created by User on 22-Dec-21.
//

#ifndef UNTITLED_DLC_H
#define UNTITLED_DLC_H


#include <string>
#include <iostream>
#include <memory>

class DLC {

protected:
    std::string nume_dlc;
    int nr_descarcari;
    float pret;

public:

    virtual std::shared_ptr<DLC> clone() const;

    //Constructorul fara parametri
    DLC();

    virtual ~DLC();

    //Constructorul cu parametri
    explicit DLC(const std::string &numeDlc, float pret, int nrDescarcari);

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const DLC &dlc);

    virtual void inflatie(float valoare_inflatie);
};


#endif //UNTITLED_DLC_H
