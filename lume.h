//
// Created by User on 19-Jan-22.
//

#ifndef UNTITLED_LUME_H
#define UNTITLED_LUME_H


#include <ostream>
#include "DLC.h"

class lume : public DLC{
private:
    int dimensiune;
public:
    lume();

    lume(const std::string &numeDlc, float pret, int nrDescarcari, int dimensiune);

    friend std::ostream &operator<<(std::ostream &os, const lume &lume);

    void inflatie(float valoare_inflatie) override;
};



#endif //UNTITLED_LUME_H
