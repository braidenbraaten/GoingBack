#pragma once
#include <string>
#include <vector>
// This class should be the template that holds the destinations the player will
//be traveling to.
class Destinations
{
 private : 
	 //Name of planet
	 std::string planetName;
	// types of enemies on the planet
	 std::vector<int> enemyTypes;


public:
	//planet Name get / set
	void getPlanetName();
	std::string setPName(std::string newName);





	//class constructors
	Destinations();
	~Destinations();
};

