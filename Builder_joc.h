//
// Created by User on 22-Jan-22.
//

#ifndef UNTITLED_BUILDER_JOC_H
#define UNTITLED_BUILDER_JOC_H

#include "joc.h"

class Builder_joc {
private:
    joc j;
public:
    Builder_joc() = default;

    Builder_joc &name(std::string nam);

    Builder_joc &genre(std::string gen);

    Builder_joc &patch(std::string pat);

    Builder_joc &release_year(int rel);

    Builder_joc &downloads(int down);

    Builder_joc &price(float pric);

    joc build();
};


#endif //UNTITLED_BUILDER_JOC_H
