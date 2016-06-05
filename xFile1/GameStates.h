#pragma once


static class GameStates
{
	//states for the overall game
    enum States { PLAY, PAUSE, GAME_OVER }states;
	//places to go within the play state
	enum Destinations {TOWER, EARTH, MARS, VENUS  /* FILL WITH PLACES*/}destinations;
	
	//update for all things
   public : void Update();

};