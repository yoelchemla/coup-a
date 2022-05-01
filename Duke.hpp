#pragma once

#include<string>
#include<iostream>
#include<vector>
#include"Player.hpp"
#include"Game.hpp"
using namespace std;


namespace coup
{
    class Duke: public Player
    {

        public:
            Duke(Game &g, string name);//constructor
            
            void take_three_coins();
            void tax();
            void block(Player P);
    };
}