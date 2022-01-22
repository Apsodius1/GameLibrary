//
// Created by User on 21-Jan-22.
//

#ifndef UNTITLED_FACTORY_H
#define UNTITLED_FACTORY_H


#include "joc.h"

class factory {

public:
    static joc actiune() {return joc("Joculet","actiune","1.0",100,2023,0,0);}
    static joc strategie() {return joc("Joculet","strategie","1.00",10,2024,0,0);}
    static joc masini() {return joc("Joculet","masini","1.000",1000,2025,0,0);}
    static joc sandbox() {return joc("Joculet","sandbox","1.0000",1,2026,0,0);}
    static joc simulare() {return joc("Joculet","simulare","1.00000",1001,2027,0,0);}
};


#endif //UNTITLED_FACTORY_H
