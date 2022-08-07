#pragma once

#include "life.h"
#


#define SCREENWIDTH 1280
#define SCREENHEIGHT 720


int highScorePage;
int defaultPage;
int optionPage;
int creditPage;
int instructionPage;
int pausedImage;
int gameOverPage;

struct DefaultPage
{
	int x;
	int y;
	int height;
	int width;
}dp;

void setDefaultPageValue()
{
	dp.x = 0;
	dp.y = 0;
	dp.height = SCREENHEIGHT;
	dp.width = SCREENWIDTH;
}

//loading image for default page and other pages
void loadDefaultPage()
{
	defaultPage = iLoadImage("image\\defaultMenu\\menudefault.png");
}
void loadHighScorePage()
{
	highScorePage = iLoadImage("image\\defaultMenu\\HighScore.png");
}
void loadOptionPage()
{
	optionPage = iLoadImage("image\\defaultMenu\\Option.png");
}
void loadCreditPage()
{
	creditPage = iLoadImage("image\\defaultMenu\\Credit.png");
}
void loadInstructionPage()
{
	instructionPage = iLoadImage("image\\defaultMenu\\Instruction.png");
}
void loadPausedImage()
{
	pausedImage = iLoadImage("image\\defaultMenu\\Paused.png");
}
void loadGameOverPage()
{
	gameOverPage = iLoadImage("image\\defaultMenu\\GameOver.png");
}


//showing all menu pages
//default page
void showDefaultPage()
{
	iShowImage(dp.x, dp.y, dp.width, dp.height, defaultPage);
}
//high score page
void showHighScorePage()
{
	showDefaultPage();
	iShowImage(500, 600, 200, 80, highScorePage);
	iText(400, 300, "Game is under construction", GLUT_BITMAP_TIMES_ROMAN_24);
}
//option page
void showOptionPage()
{
	showDefaultPage();
	iShowImage(500, 600, 200, 80, optionPage);
	iText(400, 300, "Game is under construction", GLUT_BITMAP_TIMES_ROMAN_24);
}
//credit page
void showCreditPage()
{
	showDefaultPage();
	iShowImage(500, 600, 200, 80, creditPage);
	iText(400, 300, "Game is under construction", GLUT_BITMAP_TIMES_ROMAN_24);
}
//instruction page
void showInstructionPage()
{
	showDefaultPage();
	iShowImage(500, 600, 200, 80, instructionPage);
	iText(400, 300, "Game is under construction", GLUT_BITMAP_TIMES_ROMAN_24);
}

//load game
void showLoadGamePage()
{
	showDefaultPage();
	iSetColor(255, 0, 0);
	iText(400, 450, "Game is under Construction", GLUT_BITMAP_TIMES_ROMAN_24);
}

//game over page
//game over page show when police will die
/*void showGameOverPage()
{
	if (PL1.pLife_index >= 19)
	{
		iClear();
		showDefaultPage();
		iShowImage(500, 400, 200, 80, gameOverPage);
		PL1.lifeShow = false;
		//initialValue();//initial value set
		iClear();
		showMenu();//home menu set
	}
}*/