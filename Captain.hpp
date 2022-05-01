#pragma once

#include"Player.hpp"
#include"Game.hpp"
#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Captain: public Player
    {

        public:
            Captain(Game &g, string name);//constructor
            void block(Player p);
            void steal(Player P);
            
    };
}