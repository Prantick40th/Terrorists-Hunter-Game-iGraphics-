#include "iGraphics.h"
#include "menu.h"
#include "life.h"
#include "police.h"
#include "background.h"
#include "enemy.h"
#include "menupage.h"
#include "bullet.h"
#include"bul.h"

#define SCREENWIDTH 1280
#define SCREENHEIGHT 720

int mposx,  mposy;
int enemy;

int loadCount = 0;
bool musicOn = true;

int soundCount = 1;

//All police related variables decleration and functions in police.h header file
//All background related variables decleration and functions in background.h header file
//All life related variables decleration and functions in life.h header file

//initial value for bullet
void initialBulletValue()
{
	//first character bullet initializaion
	b1.x = p1.police_x + p1.police_width;
	b1.y = p1.police_y + p1.police_height - 67;
	b2.x = p1.police_x + p1.police_width;
	b2.y = p1.police_y + p1.police_height - 67;
	b3.x = p1.police_x + p1.police_width;
	b3.y = p1.police_y + p1.police_height - 67;
	b4.x = p1.police_x + p1.police_width;
	b4.y = p1.police_y + p1.police_height - 67;
	b5.x = p1.police_x + p1.police_width;
	b5.y = p1.police_y + p1.police_height - 67;
	b6.x = p1.police_x + p1.police_width;
	b6.y = p1.police_y + p1.police_height - 67;
	b7.x = p1.police_x + p1.police_width;
	b7.y = p1.police_y + p1.police_height - 67;
	b8.x = p1.police_x + p1.police_width;
	b8.y = p1.police_y + p1.police_height - 67;
	b9.x = p1.police_x + p1.police_width;
	b9.y = p1.police_y + p1.police_height - 67;
	b10.x = p1.police_x + p1.police_width;
	b10.y = p1.police_y + p1.police_height - 67;
	b11.x = p1.police_x + p1.police_width;
	b11.y = p1.police_y + p1.police_height - 67;
	b12.x = p1.police_x + p1.police_width;
	b12.y = p1.police_y + p1.police_height - 67;
	//second character bullet initializaion
	b1.x1 = p2.police_x + p2.police_width;
	b1.y1 = p2.police_y + p2.police_height - 67;
	b2.x1 = p2.police_x + p2.police_width;
	b2.y1 = p2.police_y + p2.police_height - 67;
	b3.x1 = p2.police_x + p2.police_width;
	b3.y1 = p2.police_y + p2.police_height - 67;
	b4.x1 = p2.police_x + p2.police_width;
	b4.y1 = p2.police_y + p2.police_height - 67;
	b5.x1 = p2.police_x + p2.police_width;
	b5.y1 = p2.police_y + p2.police_height - 67;
	b6.x1 = p2.police_x + p2.police_width;
	b6.y1 = p2.police_y + p2.police_height - 67;
	b7.x1 = p2.police_x + p2.police_width;
	b7.y1 = p2.police_y + p2.police_height - 67;
	b8.x1 = p2.police_x + p2.police_width;
	b8.y1 = p2.police_y + p2.police_height - 67;
	b9.x1 = p2.police_x + p2.police_width;
	b9.y1 = p2.police_y + p2.police_height - 67;
	b10.x1 = p2.police_x + p2.police_width;
	b10.y1= p2.police_y + p2.police_height - 67;
	b11.x1 = p2.police_x + p2.police_width;
	b11.y1= p2.police_y + p2.police_height - 67;
	b12.x1 = p2.police_x + p2.police_width;
	b12.y1 = p2.police_y + p2.police_height - 67;
}
bool initialValueState = false;


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

void iDraw()
{
	//place your drawing codes here
	iClear();

	showMenu();//showing the Menu background and the buttons

	if (startButtonState)
	{
		iClear();
		//comeFromMainMenu = true;
		showNewGamePage();
		//comeFromNewGamePage = false;
		showBackButton();

	}
	if (newGameButtonState)
	{
		iClear();
		showCharacterSelectPage();
		if (firstCharacter)
		{
			if (level == 0)
			{
				iClear();
				//level = 1;
				backgroundRoadShow();

				if (stateRight)
				{
					police1RightShow();//when stateRight is true then policeRightShow() function is called
				}
				if (stateLeft)
				{
					police1LeftShow();//when stateLeft is true then policeLeftShow() function is called
				}

				if(PL1.lifeShow)
					iShowImage(PL1.pLife_x, PL1.pLife_y, PL1.pLife_width, PL1.pLife_height, policeLife1[PL1.pLife_index]);

				/*if (bulletState)
				{
					showPolice1Bullet();
				}*/

				//enemy showing
				enemyShow();
				//bullet showing
				showBullet();
				//enemies bullet
				enemyBulletShow();

				//game over page show
				showGameOverPage();
				
			}
		}
		if(secondCharacter)
		{
			if (level == 0)
			{
				iClear();
				backgroundRoadShow();
				/*following code for showing police 2 character*/
				if (stateRight1)
				{
					police2RightShow();//when stateRight1 is true then police2RightShow() function is called
				}
				if (stateLeft1)
				{
					police2LeftShow();//when stateLeft1 is true then police2LeftShow() function is called
				}


				//police life showing
				if (PL1.lifeShow)
					iShowImage(PL1.pLife_x, PL1.pLife_y, PL1.pLife_width, PL1.pLife_height, policeLife1[PL1.pLife_index]);
				//enemy showing
				enemyShow();

				//bullet showing
				showBullet();

				//enemies bullet
				enemyBulletShow();
				printf("%d\n", score);
				//game over page show
				showGameOverPage();


			}
		}

		if (level == 2)
		{
			
			if(firstCharacter)
			{
				iClear();
				stage2BackgroundShow();//second stage background show
									   /*following code for showing police 1 character*/
				if (stateRight)
				{
					police1RightShow();//when stateRight is true then police1RightShow() function is called
					if (jump)
					{
						police1RightShow == false;
						policeJump();
					}
				}
				if (stateLeft)
				{
					police1LeftShow();//when stateLeft is true then police1LeftShow() function is called
				}
				//life show
				if (PL1.lifeShow)
					iShowImage(PL1.pLife_x, PL1.pLife_y, PL1.pLife_width, PL1.pLife_height, policeLife1[PL1.pLife_index]);

				//enemy show
				enemyShow();
				//train show
				trainShow();

				//bullet showing
				showBullet();

				//enemies bullet
				enemyBulletShow();

				//game over page show
				showGameOverPage();
			}
			if (secondCharacter)
			{
				iClear();
				stage2BackgroundShow();//second stage background show

									   /*following code for showing police 2 character*/
				if (stateRight1)
				{
					police2RightShow();//when stateRight1 is true then police2RightShow() function is called
				}
				if (stateLeft1)
				{
					police2LeftShow();//when stateLeft1 is true then police2LeftShow() function is called
				}

				//police life showing
				if (PL1.lifeShow)
					iShowImage(PL1.pLife_x, PL1.pLife_y, PL1.pLife_width, PL1.pLife_height, policeLife1[PL1.pLife_index]);

				//enemy showing
				enemyShow();
				//train show
				trainShow();

				//bullet showing
				showBullet();

				//enemies bullet
				enemyBulletShow();

				//game over page show
				showGameOverPage();
			}
		}
	}
	if (loadGameButtonState)
	{
		//load game page
		iClear();
		showLoadGamePage();
		showBackButton();
	}
	if (exitButtonState)//exit
		exit(0);
	if (scoreButtonState)
	{
		//high score page showing block
		iClear();
		showHighScorePage();
		showBackButton();
	}
	if (optionsButtonState)
	{
		//option page showing block
		iClear();
		showOptionPage();
		showBackButton();
	}
	if (creditButtonState)
	{
		//credit page showing block
		iClear();
		showCreditPage();
		showBackButton();
	}
	if (instructionButtonState)
	{
		//instruction page showing
		iClear();
		showInstructionPage();
		showBackButton();
	}
	//back logic
	if (backButtonState && comeFromNewGamePage)
	{
		iClear();
		showNewGamePage();
		showBackButton();		
	}
	if (backButtonState && comeFromMainMenu)
	{
		//this block is for back button
		iClear();
		showMenu();
	}
	if (pause)
	{
		//this is for pause the game
		pausePage();
	}
	if (quitToMainMenuState)
	{
		//this block is for showing the menu after pressing Quit To Main Menu button 
		iClear();
		showMenu();
	}
	setValue();
	abc();
	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 100 && mx <= 100 + BUTTONWIDTH && my >= 300 && my <= 300 + BUTTONHEIGHT && !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState && !exitButtonState && !newGameButtonState && !loadGameButtonState)
		{
			startButtonState = true;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 100 && mx <= 100 + BUTTONWIDTH && my >= 200 && my <= 200 + BUTTONHEIGHT && !scoreButtonState && !instructionButtonState && !creditButtonState && !exitButtonState && !newGameButtonState && !loadGameButtonState && !startButtonState)
		{
			optionsButtonState = true;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 100 && mx <= 100 + BUTTONWIDTH && my >= 100 && my <= 100 + BUTTONHEIGHT && !instructionButtonState && !creditButtonState && !exitButtonState && !newGameButtonState && !loadGameButtonState && !startButtonState && !optionsButtonState)
		{
			scoreButtonState = true;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 400 && mx <= 400 + BUTTONWIDTH && my >= 300 && my <= 300 + BUTTONHEIGHT && !creditButtonState && !exitButtonState && !newGameButtonState && !loadGameButtonState && !startButtonState && !optionsButtonState && !scoreButtonState)
		{
			instructionButtonState = true;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 400 && mx <= 400 + BUTTONWIDTH && my >= 200 && my <= 200 + BUTTONHEIGHT && !exitButtonState && !newGameButtonState && !loadGameButtonState && !startButtonState && !optionsButtonState && !scoreButtonState && !instructionButtonState)
		{
			creditButtonState = true;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 400 && mx <= 400 + BUTTONWIDTH && my >= 100 && my <= 100 + BUTTONHEIGHT && !newGameButtonState && !loadGameButtonState && !startButtonState && !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState)
		{
			exitButtonState = true;
			newGameButtonState = false;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			quitToMainMenuState = false;
		}
		if (mx >= 500 && mx <= 500 + BUTTONWIDTH && my >= 450 && my <= 450 + BUTTONHEIGHT && !loadGameButtonState && !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState && !exitButtonState)
		{
			newGameButtonState = true;
			loadGameButtonState = false;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			quitToMainMenuState = false;
		}
		if (mx >= 500 && mx <= 500 + BUTTONWIDTH && my >= 350 && my <= 350 + BUTTONHEIGHT && !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState && !exitButtonState && !newGameButtonState)
		{
			loadGameButtonState = true;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			quitToMainMenuState = false;

			comeFromMainMenu = true;
			comeFromNewGamePage = false;
		}
		if (mx >= 50 && mx <= 50 + 100 && my >= 40 && my <= 40 + 50 && !newGameButtonState)
		{
			backButtonState = true;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			quitToMainMenuState = false;
		}
		if (mx >= 500 && mx <= 500 + BUTTONWIDTH && my >= 500 && my <= 500 + BUTTONHEIGHT)//&& !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState && !loadGameButtonState && !quitToMainMenuState)
		{
			iResumeTimer(0);
			pause = false;
		}
		if (mx >= 500 && mx <= 500 + BUTTONWIDTH && my >= 350 && my <= 350 + 100 && !optionsButtonState && !scoreButtonState && !instructionButtonState && !creditButtonState && !exitButtonState && !loadGameButtonState)
		{
			quitToMainMenuState = true;
			backButtonState = false;
			startButtonState = false;
			optionsButtonState = false;
			scoreButtonState = false;
			instructionButtonState = false;
			creditButtonState = false;
			exitButtonState = false;
			newGameButtonState = false;
			loadGameButtonState = false;
			//pause = true;
		}
		

		//bullet rendering
		cnt++;
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		cnt = 0;
		//false all bullet
		showBullet1 = showBullet2 = showBullet3 = showBullet4 = showBullet5 = showBullet6 = showBullet7 = showBullet8 = showBullet9 = showBullet10 = showBullet11 = showBullet12 = false;
		
		initialBulletValue();

		//mouseState = false;
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouse(int mx,int my)
{
	//place your code here

 mposx = mx;
 mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'd')
	{
		/*when pressing 'd' the stateLeft becomes false and stateRight becomes true that's why the reverse image not showing.
		Then when x-coordinate of police 1 is greater than 1200 then the road background moves and when less than 1200 then
		policeMoveRight() funtion is called.
		*/
		stateLeft = false;
		stateRight = true;
		if (p1.police_x <= 1200)
		{
			policeMoveRight();
		}
		
		if (p1.police_x >= 800)
		{
			roadBackgroundChange();
			//p1.police1_x += 5;
			p1.policeWalk_index++;
			if (p1.policeWalk_index >= 8)
			{
				p1.policeWalk_index = 0;
			}
			p1.policeIdleShow = false;
		}
	}
	if (key == 'a')
	{
		/*when pressing 'a' the stateLeft becomes true and stateRight becomes false that's why the reverse image showing.
		Then policeMoveLeft() function is called.
		*/
		stateRight = false;
		stateLeft = true;
		if (p1.police_x >= 55)
		{
			policeMoveLeft();
		}
	}
	if (key == 'n')
	{
		level = 2;
	}
	if (key == 'p')
	{
		iPauseTimer(0);
		pause = true;
	}
	if (key == '1')
	{
		firstCharacter = true;
		soundCount = 2;
		initialValue();
	}
	if (key == '2')
	{
		secondCharacter = true;
		soundCount = 2;
		initialValue();
		//PlaySound("music\\menu.wav", NULL, SND_LOOP);
	}

	if (key == 'w')
	{
		bullets[k].show = true;
		k++;

		if (k == 12)
			k = 0;
	}
		
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_RIGHT)
	{
		/*when pressing 'right key' the stateLeft1 becomes false and stateRight1 becomes true that's why the reverse image not showing.
		Then when x-coordinate of police 2 is greater than 1200 then the road background moves and when less than 1200 then
		policeMoveRight() funtion is called.
		*/
		stateLeft1 = false;
		stateRight1 = true;
		if (p2.police_x <= 1200)
		{
			police2MoveRight();
		}

		if (p2.police_x >= 800)
		{
			roadBackgroundChange();
			//p2.police1_x += 5;
			p2.policeWalk_index++;
			if (p2.policeWalk_index >= 8)
			{
				p2.policeWalk_index = 0;
			}
			p2.policeIdleShow = false;
		}
	}
	if (key == GLUT_KEY_LEFT) 
	{
		stateRight1 = false;
		stateLeft1 = true;
		if (p2.police_x >= 55)
		{
			police2MoveLeft();
		}
	}


	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}





int main()
{

	//music
	if (soundCount == 1)
	{
		PlaySound("music\\menu.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	else if (soundCount == 2)
		PlaySound("music\\Police Siren 3-SoundBible.com-553177907.wav", NULL, SND_ASYNC);
	//place your own initialization codes here.
	iInitialize(SCREENWIDTH, SCREENHEIGHT, "Terrorists");

	setButtonValue();//setting value of coordinates of buttons
	loadMenu();//image loading for buttons and menu background

	backgroundSet();
	backgroundSetValue();
	iSetTimer(50, backgroundChange);

	policeLifeSet();
	policeLifeSetValue();
	
	policeMoveSet();
	police1SetValue();
	//iSetTimer(40, police1Change);

	police2SetValue();//police 2 set value function call 

	enemyMoveSet();
	enemy1SetValue();
	iSetTimer(20, enemyMoveLeft);

	//default page set
	setDefaultPageValue();
	loadDefaultPage();
	loadHighScorePage();
	loadOptionPage();
	loadCreditPage();
	loadInstructionPage();
	loadPausedImage();

	//initialValue();

	//bullet render
	/*if (showBullet1 == true) {
		iSetTimer(25, b1.rend1);
	}
	if (showBullet2 == true) {
		iSetTimer(25, b2.rend2);
	}
	if (showBullet3 == true) {
		iSetTimer(25, b3.rend3);
	}*/

	//load bullet image
	loadBullet();

	//bullet of enemies related things
	setEnemyBulletValue();
	iSetTimer(10, enemyBulletChange);//this function renders enemies bullet and decrease the life of police when collision occure

	//kill enemy
	//iSetTimer(10, enemyKill);

	//game over page load
	loadGameOverPage();

	
	

	iStart();
	return 0;
}
