#pragma once
#include"enemy.h"
#include "police.h"
#include "bullet.h"
//all initial value for starting new game
void initialValue()
{
	//enemy
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		e1[i].enemy_x = 1280 + rand() % 900;
		e1[i].enemy_y = 130;
	}
	//life
	PL1.lifeShow = true;
	PL1.pLife_index = 0;
	//Bullet
	cnt = 0;
	initialBulletValue();
	//menu
	bool startButtonState = false;
	bool optionsButtonState = false;
	bool scoreButtonState = false;
	bool instructionButtonState = false;
	bool creditButtonState = false;
	bool exitButtonState = false;
	bool newGameButtonState = false;
	bool loadGameButtonState = false;
	bool backButtonState = false;
	bool resumeButtonState = false;
	bool quitToMainMenuState = false;
	bool pause = false;

	bool comeFromMainMenu = false;
	bool comeFromNewGamePage = false;

}
