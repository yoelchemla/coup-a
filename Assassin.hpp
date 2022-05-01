#pragma once

#include"Player.hpp"
#include"Game.hpp"
#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Assassin: public Player
    {
        public:
        
            Assassin(Game &g, string name);//constructor
            void coup(Player P);
    };
}