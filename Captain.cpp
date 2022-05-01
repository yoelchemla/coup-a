#include "Captain.hpp"
using namespace std;


namespace coup
{
    Captain::Captain(Game &g,string name) : Player(g,name){//constructor
    }
    
    void Captain::block(Player P){}
    void Captain::steal(Player P){}
}