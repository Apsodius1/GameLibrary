#include <iostream>
#include <string>
#include <vector>

class DLC {
    std::string nume_dlc;
    float pret;
    int nr_descarcari;

public:

    //Constructorul fara parametri
    DLC() : nume_dlc("?"), pret(0), nr_descarcari(0) {}

    //Constructorul cu parametri
    DLC(const std::string &numeDlc, float pret, int nrDescarcari) : nume_dlc(numeDlc), pret(pret),
                                                                    nr_descarcari(nrDescarcari) {}

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const DLC &dlc) {
        os << "nume_dlc: " << dlc.nume_dlc << " pret: " << dlc.pret << " nr_descarcari: " << dlc.nr_descarcari;
        return os << std::endl;
    }


};

class joc {
    std::string name, genre, patch;
    float size; //Pret in RON si dimensiunea in GB
    int release_year, downloads;

public:

    float price;
    int game_id;

    //Constructorul fara parametri
    joc() : name("?"), genre("game"), price(0), size(0), patch("0"), release_year(0), downloads(0) {}

    //Constructorul cu parametri
    joc(const std::string &name, const std::string &genre, const std::string &patch, float price, float size,
        int releaseYear, int downloads, int game_id) : name(name), genre(genre), patch(patch), price(price), size(size),
                                                       release_year(releaseYear), downloads(downloads),
                                                       game_id(game_id) {}

    //Constructorul de copiere
    joc(const joc &copie) {
        this->name = copie.name;
        this->downloads = copie.downloads;
        this->release_year = copie.release_year;
        this->patch = copie.patch;
        this->genre = copie.genre;
        this->size = copie.size;
        this->price = copie.price;
        this->game_id = copie.game_id;
    }

    //Destructor
    ~joc() {}

    //Operatorul egal
    joc &operator=(const joc &copie) {
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

    friend std::ostream &operator<<(std::ostream &os, const joc &joc) {
        os << "name: " << joc.name << " genre: " << joc.genre << " patch: " << joc.patch << " price: " << joc.price
           << " size: " << joc.size << " release_year: " << joc.release_year << " downloads: " << joc.downloads
           << " game_id: " << joc.game_id;
        return os;
    }

    void sale(float procent_reducere) {
        this->price = this->price - ((procent_reducere / 100) * this->price);
        std::cout << this->name << " costa doar: " << this->price << "RON" << std::endl;
    }

    void actualizare(float dimensiune, std::string versiune) {
        this->size = this->size + dimensiune;
        this->patch = versiune;
        std::cout << "Noul update adduce versiunea: " << this->patch << ". De descarcat: " << dimensiune << " GB"
                  << std::endl;
    }

    joc(int i) {

    }
};


class utilizator {
    std::string username, bio;
    float balance;
    std::vector<joc> games_owned;

public:

    //Constructorul fara parametri
    utilizator() : username("Player"), bio("-"), balance(0), games_owned(0) {}

    //Constructorul cu parametri
    utilizator(const std::string &username, const std::string &bio, float balance, int gamesOwned)
            : username(username), bio(bio), balance(balance), games_owned(gamesOwned) {}

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const utilizator &utilizator) {
        os << "username: " << utilizator.username << " bio: " << utilizator.bio << " balance: " << utilizator.balance
           << "number games_owned: " << utilizator.games_owned.size() << std::endl;
        return os;
    }

    void schimbare_nume(std::string nume, std::string bio2) {
        this->username = nume;
        this->bio = bio2;

    }

    void cumparare_joc(int game_id, float price) {
        if (this->balance > price || this->balance == price) {
            this->games_owned.emplace_back(game_id);
            this->balance = this->balance - price;
        }

    }
};


int main() {

    joc joc1;
    std::cout << joc1;
    joc Minecraft("Minecraft", "Sandbox", "1.17", 115, 1.2, 2011, 0, 1);
    joc joc3(Minecraft);
    joc joc2;
    joc2 = joc3;
    std::cout << joc3;
    Minecraft.sale(30);
    Minecraft.actualizare(0.12, "1.173");

    utilizator P1;
    std::cout << P1;
    utilizator P2("Augustin", "-", 100, 0);
    std::cout << P2;
    P2.schimbare_nume("Aug", "Hello world!");
    P2.cumparare_joc(Minecraft.game_id, Minecraft.price);
    std::cout << P2;

    DLC dlc1;
    std::cout << dlc1;
    DLC dlc2("world", 25, 0);
    DLC dlc3;
    return 0;
}