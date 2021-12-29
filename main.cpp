#include <iostream>
#include "DLC.h"
#include "joc.h"
#include "utilizator.h"


int main() {

    joc Dota2("Dota 2", "MOBA", "7.30", 30, 2013, 110000, 0, 2);
    joc Minecraft("Minecraft", "Sandbox", "1.17", 1.2, 2011, 20110, 115, 1);
    joc RL("Rocket League", "Football", "2.07", 23.5, 2015, 100000, 100, 3);
    joc TFM("TeamFight Manager", "Strategy", "1.4.5", 0.3, 2020, 25000, 35, 4);
    joc ETG("Enter the Gungeon", "Bullet hell", "2.1.92", 2, 2016, 340000, 33, 5);

    joc *ptr;

    Minecraft.sale(30);
    Minecraft.actualizare(0.12, "1.173");
    std::cout<<Minecraft;
    RL.sale(100);
    std::cout<<RL;

    utilizator bot1("BOT1", " I'm the first bot", 10000,0);
    utilizator bot2("BOT2", " I'm the second bot", 10000,0);
    utilizator bot3("BOT3", " I'm the third bot", 10000,0);
    utilizator bot4("BOT4", " I'm the fourth bot", 10000,0);
    utilizator bot5("BOT5", " I'm the fifth bot", 10000,0);
    utilizator bot6("BOT6", " I'm bot number 6", 10000,0);
    utilizator P1;
    std::cout << P1;
    utilizator P2("Augustin", "-", 100, 0);
    std::cout << P2;
    P2.schimbare_nume("Aug", "Hello world!");

    P2.cumparare_joc(Minecraft);
    std::cout << P2;

    DLC dlc1;
    std::cout << dlc1;
    DLC dlc2("world", 25, 0);
    DLC dlc3;
    return 0;
}