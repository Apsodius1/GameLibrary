//
// Created by User on 19-Jan-22.
//

#ifndef UNTITLED_SKIN_H
#define UNTITLED_SKIN_H


#include <ostream>
#include "DLC.h"

class skin : public DLC {
private:
    std::string culoare;
public:

    skin();

    skin(const std::string &numeDlc, float pret, int nrDescarcari, const std::string &culoare);

    friend std::ostream &operator<<(std::ostream &os, const skin &skin);

};


#endif //UNTITLED_SKIN_H
