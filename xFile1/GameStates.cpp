#include "GameStates.h"


void GameStates::Update()
{
	switch (states, destinations)
	{
		//
	case States::PLAY:
		///Begin destination switch
		switch (destinations)
		{
		case Destinations::EARTH:

			break;
		case Destinations::MARS:

			break;
		case Destinations::VENUS:

			break;
			// the tower should be default
		default:
		case Destinations::TOWER:
			break;
		}
		break;
		///end of Destination switch

	case States::PAUSE:
		break;
	case States::GAME_OVER:
		break;

	default:
		break;
	}
}