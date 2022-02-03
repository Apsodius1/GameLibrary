#include <iostream>
#include "DLC.h"
#include "joc.h"
#include "utilizator.h"
#include "skin.h"
#include "lume.h"
#include "factory.h"
#include "battlepass.h"
#include "Builder_joc.h"


int main() {


    joc Dota2("Dota 2", "MOBA", "7.30", 30, 2013, 110000, 0);
    joc Minecraft("Minecraft", "Sandbox", "1.17", 1.2, 2011, 20110, 115);
    joc RL("Rocket League", "Football", "2.07", 23.5, 2015, 100000, 100);
    joc TFM("TeamFight Manager", "Strategy", "1.4.5", 0.3, 2020, 25000, 35);
    joc ETG("Enter the Gungeon", "Bullet hell", "2.1.92", 2, 2016, 340000, 33);


    Minecraft.sale(30);
    Minecraft.actualizare(0.12, "1.173");
    std::cout << Minecraft.getPrice() << std::endl;
    RL.sale(100);
    std::cout << RL << std::endl;

    utilizator bot1("BOT1", " I'm the first bot", 10000, 0);
    utilizator bot2("BOT2", " I'm the second bot", 10000, 0);
    utilizator bot3("BOT3", " I'm the third bot", 10000, 0);
    utilizator bot4("BOT4", " I'm the fourth bot", 10000, 0);
    utilizator bot5("BOT5", " I'm the fifth bot", 10000, 0);
    utilizator bot6("BOT6", " I'm bot number 6", 10000, 0);
    utilizator P1;
    std::cout << P1 << std::endl;
    utilizator P2("Augustin", "-", 0, 0);
    std::cout << P2 << std::endl;
    P2.schimbare_nume("Aug", "Hello world!");

    try {
        bot1.cumparare_joc(RL.clone());
        bot1.cumparare_joc(Minecraft.clone());
        bot1.cumparare_joc(TFM.clone());
        bot1.cumparare_joc(ETG.clone());
        std::cout << bot1 << std::endl;
        P2.cumparare_joc(std::make_shared<joc>(Minecraft));
        std::cout << P2 << std::endl;


    } catch (eroare_cumparare &eroare) {
        std::cout << eroare.what() << std::endl;
    }
    catch (eroare_utilizator &eroare) {
        std::cout << eroare.what() << std::endl;
    }

    lume badlands("badlands", 0, 0, 100);
    lume champions_field("champions field", 0, 0, 100);
    lume DFH_stadium("DFH stadium", 0, 0, 100);
    RL.adaugare_dlc(badlands.clone());
    RL.adaugare_dlc(champions_field.clone());
    RL.adaugare_dlc(DFH_stadium.clone());

    skin fire_god("fire god", 500, 100, "rosu");
    skin storm_watch("storm watch", 300, 150, "albastru");
    skin snowstorm("snowstorm", 50, 3000, "alb");
    RL.adaugare_dlc(fire_god.clone());
    RL.adaugare_dlc(storm_watch.clone());
    RL.adaugare_dlc(snowstorm.clone());

    skin TFMskin1("TFMskin1", 30, 30, "negru");
    lume TFMlume1("TFMlume1", 0, 0, 10);
    TFM.adaugare_dlc(TFMskin1.clone());
    TFM.adaugare_dlc(TFMlume1.clone());

    skin ETGskin1("ETGskin1", 13, 300, "alb");
    lume ETGlume1("ETGlume1", 30, 1000, 13);
    ETG.adaugare_dlc(ETGskin1.clone());
    ETG.adaugare_dlc(ETGlume1.clone());

    lume mcworld1("mcworld1", 0, 0, 13);
    lume mcworld2("mcworld2", 0, 0, 20);
    lume mcworld3("mcworld3", 0, 0, 33);
    lume mcworld4("mcworld4", 0, 0, 55);
    lume mcworld5("mcworld5", 0, 0, 67);
    Minecraft.adaugare_dlc(mcworld2.clone());
    Minecraft.adaugare_dlc(mcworld3.clone());
    Minecraft.adaugare_dlc(mcworld4.clone());
    Minecraft.adaugare_dlc(mcworld5.clone());
    Minecraft.adaugare_dlc(mcworld1.clone());

    skin steve("steve", 8, 0, "albastru");
    skin girl("girl", 8, 0, "roz");
    Minecraft.adaugare_dlc(steve.clone());
    Minecraft.adaugare_dlc(girl.clone());

    skin srosu("srosu", 8, 0, "rosu");
    skin sgalben("sgalben", 7, 0, "galben");
    skin snegru("snegru", 13, 0, "negru");
    skin sauriu("sauriu", 100, 0, "auriu");
    skin sverde("sverdeu", 9, 0, "verde");
    Dota2.adaugare_dlc(srosu.clone());
    Dota2.adaugare_dlc(sgalben.clone());
    Dota2.adaugare_dlc(sverde.clone());
    Dota2.adaugare_dlc(sauriu.clone());
    Dota2.adaugare_dlc(snegru.clone());

    lume dotamap1("dotamap1", 0, 0, 12);
    lume dotamap2("dotamap2", 0, 0, 13);
    lume dotamap3("dotamap3", 0, 0, 14);
    lume dotamap4("dotamap4", 0, 0, 15);
    lume dotamap5("dotamap5", 0, 0, 16);
    Dota2.adaugare_dlc(dotamap1.clone());
    Dota2.adaugare_dlc(dotamap2.clone());
    Dota2.adaugare_dlc(dotamap3.clone());
    Dota2.adaugare_dlc(dotamap4.clone());
    Dota2.adaugare_dlc(dotamap5.clone());

    std::cout << Dota2 << std::endl;


    DLC *dlcp = new DLC;

    std::cout << srosu << std::endl << sgalben << std::endl << ETGlume1 << std::endl;
    dlcp = &srosu;
    dlcp->inflatie(-50);
    dlcp = &sgalben;
    dlcp->inflatie(50);
    dlcp = &ETGlume1;
    dlcp->inflatie(30);
    std::cout << srosu << std::endl << sgalben << std::endl << ETGlume1;

    joc joca1 = factory::actiune();
    joc jocm1 = factory::masini();
    joc jocs1 = factory::strategie();
    joc jocsa1 = factory::sandbox();
    joc jocsi1 = factory::simulare();
    std::cout << joca1 << std::endl << jocm1 << std::endl << jocs1 << std::endl << jocsa1 << std::endl << jocsi1
              << std::endl;

    battlepass<int, std::string, std::string, std::string> compendium("Compendium", 100, 10000, 3, "reward2", "reward3",

                                                                      "reward4");
    dlcp = &compendium;
    dlcp->inflatie(86.5);
    std::cout << compendium << std::endl;
    Dota2.adaugare_dlc(compendium.clone());

    battlepass<int, int, std::string, std::string> ETGbp("ETGbp", 120, 10000, 3, 15, "reward3", "reward4");
    dlcp = &ETGbp;
    dlcp->inflatie(18.5);
    std::cout << ETGbp << std::endl;
    ETG.adaugare_dlc(ETGbp.clone());

    battlepass<int, int, int, std::string> TFMbp("tfmbp", 135, 10000, 58, 83, 67, "reward4");
    dlcp = &TFMbp;
    dlcp->inflatie(33.67);
    std::cout << TFMbp << std::endl;
    ETG.adaugare_dlc(TFMbp.clone());

    battlepass<int, int, int, int> RLbp("RLbp", 148, 10000, 100, 200, 300, 400);
    dlcp = &RLbp;
    dlcp->inflatie(89.9);
    std::cout << RLbp << std::endl;
    RL.adaugare_dlc(RLbp.clone());


    battlepass<int, int, std::string, std::string> McBP("Mcbp", 396, 10000, 13, 155, "reward33", "reward44");
    dlcp = &McBP;
    dlcp->inflatie(18.5);
    std::cout << McBP << std::endl;
    Minecraft.adaugare_dlc(McBP.clone());

    Builder_joc jt;
    joc joctest = jt.downloads(13).release_year(1999).genre("indie").patch("1.3").name("Joc smecher").price(
            10000).build();
    std::cout << joctest;
    Dota2.afisare_extensii();
    RL.afisare_extensii();
    ETG.afisare_extensii();
    bot1.afisare_jocuri();


    return 0;
}