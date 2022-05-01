#pragma once

#include"Game.hpp"

#include<string>
#include<iostream>
#include<vector>


using namespace std;


namespace coup
{
    class Player
    {
        public:
          
            Game game;
            int coin;
            string name;
            
            Player(Game &g, string name);//constructor
            int coins();
            string role();
            void income();
            void foreign_aid();
            void coup(Player P);
    };
}
    