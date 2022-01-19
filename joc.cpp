//
// Created by User on 22-Dec-21.
//

#include "joc.h"

int joc::game_idmax = 0;

joc::joc() : name("?"), genre("game"), price(0), size(0), patch("0"), release_year(0), downloads(0), game_id(-1) {}

joc::joc(const std::string &name, const std::string &genre, const std::string &patch, float size, int releaseYear,
         int downloads, float price) : name(name), genre(genre), patch(patch), size(size),
                                       release_year(releaseYear), downloads(downloads), price(price),
                                       game_id(game_idmax) { game_idmax++; }

joc::joc(const joc &copie) {
    this->name = copie.name;
    this->downloads = copie.downloads;
    this->release_year = copie.release_year;
    this->patch = copie.patch;
    this->genre = copie.genre;
    this->size = copie.size;
    this->price = copie.price;
    this->game_id = copie.game_id;
}


joc &joc::operator=(const joc &copie) {
    this->name = copie.name;
    this->downloads = copie.downloads;
    this->release_year = copie.release_year;
    this->patch = copie.patch;
    this->genre = copie.genre;
    this->size = copie.size;
    this->price = copie.price;
    this->game_id = copie.game_id;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const joc &joc) {
    os << "name: " << joc.name << " genre: " << joc.genre << " patch: " << joc.patch << " price: " << joc.price
       << " size: " << joc.size << " release_year: " << joc.release_year << " downloads: " << joc.downloads
       << " game_id: " << joc.game_id << std::endl;
    return os;
}

void joc::sale(float procent_reducere) {
    this->price = this->price - ((procent_reducere / 100) * this->price);
    std::cout << this->name << " costa doar: " << this->price << "RON" << std::endl;
}

void joc::actualizare(float dimensiune, std::string versiune) {
    this->size = this->size + dimensiune;
    this->patch = versiune;
    std::cout << "Noul update adduce versiunea: " << this->patch << ". De descarcat: " << dimensiune << " GB"
              << std::endl;
}

joc::joc(int i) {

}

float joc::getPrice() const {
    return price;
}

int joc::getGameId() const {
    return game_id;
}

std::shared_ptr<joc> joc::clone() const {
    return std::make_shared<joc>(*this);
}

void joc::adaugare_dlc(std::shared_ptr<DLC> dlc){
    this->extensii.push_back(dlc->clone());
}

joc::~joc() {

}
