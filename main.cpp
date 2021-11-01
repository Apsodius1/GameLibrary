#include <iostream>
#include <string>
#include <vector>

class joc {
    std::string name, genre, patch;
    float price, size; //Pret in RON si dimensiunea in GB
    int release_year, downloads;

public:

    //Constructorul fara parametri
    joc() : name("?"), genre("game"), price(0), size(0), patch("0"), release_year(0), downloads(0) {}

    //Constructorul cu parametri
    joc(const std::string &name, const std::string &genre, const std::string &patch, float price, float size,
        int releaseYear, int downloads) : name(name), genre(genre), patch(patch), price(price), size(size),
                                             release_year(releaseYear), downloads(downloads) {}

    //Constructorul de copiere
    joc(const joc& copie) {
        this->name = copie.name;
        this->downloads = copie.downloads;
        this->release_year = copie.release_year;
        this->patch = copie.patch;
        this->genre = copie.genre;
        this->size = copie.size;
        this->price = copie.price;
    }

    //Destructor
    ~joc()
    {}

    //Operatorul egal
    joc& operator=(const joc& copie){
        this->name = copie.name;
        this->downloads = copie.downloads;
        this->release_year = copie.release_year;
        this->patch = copie.patch;
        this->genre = copie.genre;
        this->size = copie.size;
        this->price = copie.price;
        return *this;
    }

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const joc &jocuri) {
        os << "name: " << jocuri.name << " genre: " << jocuri.genre << " price: " << jocuri.price << " size: "
           << jocuri.size << " patch: " << jocuri.patch << " release_year: " << jocuri.release_year << " downloads: "
           << jocuri.downloads << std::endl;
        return os;
    }

    void sale(float procent_reducere){
        this->price = this->price - ((procent_reducere/100) * this->price);
        std::cout<<this->name<<" costa doar: "<<this->price<<"RON"<<std::endl;
    }
    void actualizare(float dimensiune,std::string versiune){
        this->size = this->size + dimensiune;
        this->patch = versiune;
        std::cout<<"Noul update adduce versiunea: "<<this->patch<<". De descarcat: "<<dimensiune<<" GB"<<std::endl;
    }
};


class utilizator{
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
           << "number games_owned: " << utilizator.games_owned.size();
        return os;
    }

    void schimbare_nume(std::string nume,std::string bio2){
        this->username = nume;
        this->bio = bio2;

    }
};


class DLC{
    std::string nume_dlc, nume_joc;
    float pret;
    int nr_descarcari;

public:

    //Constructorul fara parametri
    DLC() :nume_dlc("?"), nume_joc("?"), pret(0), nr_descarcari(0) {}

    //Constructorul cu parametri
    DLC(const std::string &numeDlc, const std::string &numeJoc, float pret, int nrDescarcari)
    : nume_dlc(numeDlc), nume_joc(numeJoc), pret(pret), nr_descarcari(nrDescarcari) {}

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const DLC &dlc) {
        os << "nume_dlc: " << dlc.nume_dlc << " nume_joc: " << dlc.nume_joc << " pret: " << dlc.pret
           << " nr_descarcari: " << dlc.nr_descarcari << std::endl;
        return os;
    }

};

int main()
{

joc joc1;
std::cout<<joc1;
joc Minecraft("Minecraft", "Sandbox", "1.17",115,1.2,2011,0 );
joc joc3(Minecraft);
joc joc2;
joc2 = joc3;
std::cout<<joc3;
Minecraft.sale(30);
Minecraft.actualizare(0.12,"1.173");

utilizator P1;
std::cout<< P1;
utilizator P2("Augustin", "-", 100, 0);
std::cout<<P2;
P2.schimbare_nume("Aug","Hello world!");
std::cout<<P2;

DLC dlc1;
std::cout<<dlc1;
DLC dlc2("world","Minecraft",25,0);
DLC dlc3;
    return 0;
}