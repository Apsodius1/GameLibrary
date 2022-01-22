//
// Created by User on 22-Jan-22.
//

#include "Builder_joc.h"

Builder_joc &Builder_joc::name(std::string nam) {
    j.name = nam;
    return *this;
}

Builder_joc &Builder_joc::genre(std::string gen) {
    j.genre = gen;
    return *this;
}

Builder_joc &Builder_joc::patch(std::string pat) {
    j.patch = pat;
    return *this;
}

Builder_joc &Builder_joc::release_year(int rel) {
    j.release_year = rel;
    return *this;
}

Builder_joc &Builder_joc::downloads(int down) {
    j.downloads = down;
    return *this;
}

Builder_joc &Builder_joc::price(float pric) {
    j.price = pric;
    return *this;
}

joc Builder_joc::build() {
    return j;
}