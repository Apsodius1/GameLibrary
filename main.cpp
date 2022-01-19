#include <iostream>
#include "DLC.h"
#include "joc.h"
#include "utilizator.h"
#include "skin.h"
#include "lume.h"


int main() {


        joc Dota2("Dota 2", "MOBA", "7.30", 30, 2013, 110000, 0);
        joc Minecraft("Minecraft", "Sandbox", "1.17", 1.2, 2011, 20110, 115);
        joc RL("Rocket League", "Football", "2.07", 23.5, 2015, 100000, 100);
        joc TFM("TeamFight Manager", "Strategy", "1.4.5", 0.3, 2020, 25000, 35);
        joc ETG("Enter the Gungeon", "Bullet hell", "2.1.92", 2, 2016, 340000, 33);


        Minecraft.sale(30);
        Minecraft.actualizare(0.12, "1.173");
        std::cout << Minecraft.getPrice();
        RL.sale(100);
        std::cout << RL;

        utilizator bot1("BOT1", " I'm the first bot", 10000, 0);
        utilizator bot2("BOT2", " I'm the second bot", 10000, 0);
        utilizator bot3("BOT3", " I'm the third bot", 10000, 0);
        utilizator bot4("BOT4", " I'm the fourth bot", 10000, 0);
        utilizator bot5("BOT5", " I'm the fifth bot", 10000, 0);
        utilizator bot6("BOT6", " I'm bot number 6", 10000, 0);
        utilizator P1;
        std::cout << P1;
        utilizator P2("Augustin", "-", 0, 0);
        std::cout << P2;
        P2.schimbare_nume("Aug", "Hello world!");

    try {
        bot1.cumparare_joc(std::make_shared<joc>(RL));
        bot1.cumparare_joc(std::make_shared<joc>(Minecraft));
        bot1.cumparare_joc(std::make_shared<joc>(TFM));
        bot1.cumparare_joc(std::make_shared<joc>(ETG));
        std::cout << bot1 << std::endl;
        P2.cumparare_joc(std::make_shared<joc>(Minecraft));
        std::cout << P2 << std::endl;


    } catch (eroare_cumparare &eroare) {
        std::cout << eroare.what() << std::endl;
    }
    catch (eroare_utilizator &eroare) {
        std::cout << eroare.what() << std::endl;
    }
    lume mcworld1("mcworld1",0,0,13);
    lume mcworld2("mcworld2",0,0,20);
    lume mcworld3("mcworld3",0,0,33);
    lume mcworld4("mcworld4",0,0,55);
    lume mcworld5("mcworld5",0,0,67);
    Minecraft.adaugare_dlc(std::make_shared<lume>(mcworld2));
    Minecraft.adaugare_dlc(std::make_shared<lume>(mcworld3));
    Minecraft.adaugare_dlc(std::make_shared<lume>(mcworld4));
    Minecraft.adaugare_dlc(std::make_shared<lume>(mcworld5));
    Minecraft.adaugare_dlc(std::make_shared<lume>(mcworld1));

    skin srosu("srosu",8,0,"rosu");
    skin sgalben("sgalben",7,0,"galben");
    skin snegru("snegru",13,0,"negru");
    skin sauriu("sauriu",100,0,"auriu");
    skin sverde("sverdeu",9,0,"verde");
    Dota2.adaugare_dlc(std::make_shared<skin>(srosu));
    Dota2.adaugare_dlc(std::make_shared<skin>(sgalben));
    Dota2.adaugare_dlc(std::make_shared<skin>(sverde));
    Dota2.adaugare_dlc(std::make_shared<skin>(sauriu));
    Dota2.adaugare_dlc(std::make_shared<skin>(snegru));

    srosu.inflatie(0.1);
    sgalben.inflatie(0.3);

    std::cout<< srosu << " " << sgalben << std::endl;
    std::cout << Dota2 << std::endl;
    return 0;
}