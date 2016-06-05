#pragma once
#include <string>
#include <vector>

/*
		This class is for a template for both enemies and the player
*/

class Humanoid
{
private :
	//name of either player, or enemy type
	std::string Name;
	//Health amount
	int Health;
	//damage output
	int Damage;
	//the armor / damage they can take before affecting health
	int Shields;
	// aka stamina
	int Energy;

	// use this to let enemy units communicate with each other during a fight
	std::vector<Humanoid*> connectionList;


public:

	void setName(std::string newN);
	std::string getName();

	void setHealth(int newH);
	int getHealth();

	void setDamage(int newD);
	int getDamage();

	void setShields(int newS);
	int getSheilds();

	void setEnergy(int newE);
	int getEnergy();

	//adds to the connection list
	void addToConnections(Humanoid*);
	//returns the list of connections
	auto getConnections()
	{
		return connectionList;
	}

	//Constructors
	Humanoid();
	~Humanoid();
};

