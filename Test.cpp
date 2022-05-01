#include "Assassin.hpp"	
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Game.hpp"
#include "Player.hpp"
	
#include <iostream>
#include <stdexcept>
#include <vector>
#include "doctest.h"
	
	
	using namespace std;
	using namespace coup;
	
	  
	TEST_CASE("check the functions"){
	
	    Game game_1{};
	
		Ambassador ambassador{game_1, "yoel"};
       		Assassin assassin{game_1, "daniel"};	 
		Captain captain{game_1, "hen"}; 
		Contessa contessa{game_1, "noa"};
	    	Duke duke{game_1, "linoy"};   
	
	// a good input
    Game game_check{};
    Ambassador ambassador1(game_check, "ambassador_check");
    Assassin assassin1(game_check, "assassin_check");
    Captain captain1(game_check, "captain_check");
    Contessa contessa1(game_check, "contessa_check");
    Duke duke1(game_check, "duke_check");


    //init a vector
    vector<string> vector_check = {"ambassador_check", "assassin_check", "captain_check", "contessa_check", "duke_check"};
   
    for(uint i =0; i< vector_check.size(); i++){
        CHECK_EQ(game_check.turn(), vector_check.at(i));
        CHECK_EQ(game_check.winner(), vector_check.at(i));
      
    }
//////////


    //CHECK THE FUNCTIONS:

	//game_1 
		CHECK_THROWS(game_1.turn());
		CHECK_THROWS(game_1.winner());
	
	
	//ambassador
		CHECK_THROWS(ambassador.transfer(duke,captain));
       		CHECK_THROWS(ambassador.income());
		CHECK_THROWS(ambassador.foreign_aid());
		

	
	//assassin
	    
		CHECK_THROWS(assassin.income());
        	CHECK_THROWS(assassin.foreign_aid());
		CHECK_THROWS(assassin.coup(duke));
		
	
	
	//captain
	    
		CHECK_THROWS(captain.income());
		CHECK_THROWS(captain.foreign_aid());
		CHECK_THROWS(captain.coup(duke));
		CHECK_THROWS(captain.steal(contessa));
      		CHECK_THROWS(captain.block(captain));
			

	//contessa
	    
		CHECK_THROWS(contessa.income());
		CHECK_THROWS(contessa.foreign_aid());
    		CHECK_THROWS(contessa.coup(duke));

       // duke
	
		CHECK_THROWS(duke.income());
		CHECK_THROWS(duke.foreign_aid());
		CHECK_THROWS(duke.tax());
	
	
    
}
