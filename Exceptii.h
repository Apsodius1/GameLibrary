//
// Created by User on 19-Jan-22.
//

#ifndef UNTITLED_EXCEPTII_H
#define UNTITLED_EXCEPTII_H

#include <stdexcept>

class eroare_utilizator : public std::runtime_error {
public:
    explicit eroare_utilizator(const std::string &arg);

};


class eroare_cumparare : public eroare_utilizator {
public:

    explicit eroare_cumparare();
};

#endif //UNTITLED_EXCEPTII_H
