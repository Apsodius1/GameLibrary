//
// Created by User on 19-Jan-22.
//

#include "Exceptii.h"

eroare_utilizator::eroare_utilizator(const std::string &arg) : runtime_error(" eroare utilizator:" + arg) {}

eroare_cumparare::eroare_cumparare() : eroare_utilizator(" nu ai destule fonduri\n") {}
