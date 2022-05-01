#pragma once

#include"Player.hpp"
#include"Game.hpp"
#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Ambassador: public Player
    {
        public:

            Ambassador(Game &g, string name); //constructor
            void transfer(Player P1,Player P2);
    };
}