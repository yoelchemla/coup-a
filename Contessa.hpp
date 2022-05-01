#pragma once

#include"Player.hpp"
#include"Game.hpp"
#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Contessa: public Player
    {
        public:
            Contessa(Game &g, string name);//constructor
            void block(Player P);
    };
}