#pragma once
#include "menuNonox.h"
#include "ArchiveScore.h"
#include "Level.h"
#include "Timer.h"
#include "Ranking.h"
#include "Credits.h"
#include "Rules.h"


class ManagerNonox {

private:

     sf::RenderWindow window;
     MenuNonox _menu;
     Score _score;
     Rules _rules;
     ArchiveScore _archivoScore;
     Ranking _ranking;
     Credits _credits;
     int _stateWindow;

public:

     ManagerNonox();

     sf::RenderWindow &getWindow() {return window;}
     void setStateWindow(int s);
     int getStateWindow();


     void update(sf::RenderWindow& window);
     void run(sf::RenderWindow &window,Level &level);
     bool newGame(sf::RenderWindow &ventana);


     int isGreater(int s);
     void saveScoreArchive();

};
