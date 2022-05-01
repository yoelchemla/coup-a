#include "Game.hpp"

using namespace std;


namespace coup
{
    Game::Game(){};//constructor

    vector<string> Game::players(){
        return player;
    }

    string Game::turn(){
        return " ";
    }
    
    string Game::winner(){
        return " ";
    }
}