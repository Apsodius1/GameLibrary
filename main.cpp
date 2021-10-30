#include <iostream>
#include <string>

class jocuri {
    std::string name, genre;
    float price, size, patch; //Pret in lei si dimensiunea in GB
    int release_year, downloads;

public:

    //Constructorul fara parametri
    jocuri() : name("?"), genre("game"), price(0), size(0), patch(0), release_year(0), downloads(0) {}

    //Constructorul cu parametri
    jocuri(const std::string &name, const std::string &genre, float price, float size, float patch, int releaseYear,
           int downloads) : name(name), genre(genre), price(price), size(size), patch(patch), release_year(releaseYear),
                            downloads(downloads) {}

    //Constructorul de copiere
    jocuri(const jocuri& copie) {
        this->name = copie.name;
        this->downloads = copie.downloads;
        this->release_year = copie.release_year;
        this->patch = copie.patch;
        this->genre = copie.genre;
        this->size = copie.size;
        this->price = copie.price;
    }

    //Destructor
    ~jocuri()
    {}

    //Operatorul egal
    jocuri& operator=(const jocuri& copie){
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
    friend std::ostream &operator<<(std::ostream &os, const jocuri &jocuri) {
        os << "name: " << jocuri.name << " genre: " << jocuri.genre << " price: " << jocuri.price << " size: "
           << jocuri.size << " patch: " << jocuri.patch << " release_year: " << jocuri.release_year << " downloads: "
           << jocuri.downloads << std::endl;
        return os;
    }

    void sale(float procent_reducere){
        this->price = this->price - ((procent_reducere/100) * this->price);
        std::cout<<this->name<<" costa doar: "<<this->price<<"RON"<<std::endl;
    }
    void actualizare(float dimensiune,float versiune){
        this->size = this->size + dimensiune;
        this->patch = versiune;
        std::cout<<"Noul update adduce versiunea: "<<this->patch<<". De descarcat: "<<dimensiune<<" GB"<<std::endl;
    }
};


class utilizatori{
    std::string username, bio;
    float balance;
    int games_owned;

public:

    //Constructorul fara parametri
    utilizatori() :username("Player"), bio("-"), balance(0), games_owned(0) {}

    //Constructorul cu parametri
    utilizatori(const std::string &username, const std::string &bio, float balance, int gamesOwned)
            : username(username), bio(bio), balance(balance), games_owned(gamesOwned) {}

    //Stream output detector
    friend std::ostream &operator<<(std::ostream &os, const utilizatori &utilizatori) {
        os << "username: " << utilizatori.username << " bio: " << utilizatori.bio << " balance: " << utilizatori.balance
           << " games_owned: " << utilizatori.games_owned << std::endl;
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

jocuri joc1;
std::cout<<joc1;
jocuri Minecraft("Minecraft","Sandbox",115,1.1,1.17,2011,0);
jocuri joc3(Minecraft);
jocuri joc2;
joc2 = joc3;
std::cout<<joc3;
Minecraft.sale(30);
Minecraft.actualizare(0.12,1.173);

utilizatori P1;
std::cout<< P1;
utilizatori P2("Augustin","-",100,0);
std::cout<<P2;
P2.schimbare_nume("Aug","Hello world!");
std::cout<<P2;

DLC dlc1;
std::cout<<dlc1;
DLC dlc2("world","Minecraft",25,0);
    return 0;
}