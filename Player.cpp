#include "Player.hpp"

using namespace std;


namespace coup
{
    Player::Player(Game &g, string name) //constructor
    {
        this->coin = 0; // init
        this->game = g;
        this->name = name;
        
       
    }

    int Player::coins(){
        return coin;
    }
    
    string Player::role(){
        return " ";
    }
    
    void Player::income(){    
    }

    void Player::foreign_aid(){
    } 
   
    void Player::coup(Player P){  
    }
}