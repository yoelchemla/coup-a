#pragma once

#include<string>
#include<iostream>
#include<vector>

using namespace std;


namespace coup
{
    class Game
    {
        public:
            
            Game();//constructor
            vector<string> player;
            
            //the functions:
            
            vector<string> players();
            string turn();
            string winner();
    };
}