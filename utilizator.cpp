//
// Created by User on 22-Dec-21.
//

#include "utilizator.h"

utilizator::utilizator() : username("Player"), bio("-"), balance(0), games_owned(0) {}

utilizator::utilizator(const std::string &username, const std::string &bio, float balance, int gamesOwned)
        : username(username), bio(bio), balance(balance), games_owned(gamesOwned) {}

std::ostream &operator<<(std::ostream &os, const utilizator &utilizator) {
    os << "username: " << utilizator.username << " bio: " << utilizator.bio << " balance: " << utilizator.balance
       << "number games_owned: " << utilizator.games_owned.size() << std::endl;
    return os;
}

void utilizator::schimbare_nume(std::string nume, std::string bio2) {
    this->username = nume;
    this->bio = bio2;

}

void utilizator::cumparare_joc(int game_id, float price) {
    if (this->balance > price || this->balance == price) {
        this->games_owned.emplace_back(game_id);
        this->balance = this->balance - price;
    }

}
