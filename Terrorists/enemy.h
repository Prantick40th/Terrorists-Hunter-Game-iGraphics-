#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED
//#include "bullet.h"
//#include "police.h"

#define FIRSTSTAGEENEMY 2
#define ENEMYSPEED 3
//Enemy 1
//idle
int enemy_1_idle;

//walk
int enemy_1_walk[8];
char e1_walk[8][100] = { "image\\terrorist1\\Asset1.png","image\\terrorist1\\Asset2.png","image\\terrorist1\\Asset3.png","image\\terrorist1\\Asset4.png","image\\terrorist1\\Asset5.png","image\\terrorist1\\Asset6.png","image\\terrorist1\\Asset7.png","image\\terrorist1\\Asset8.png" };

//reverse
int enemy_1_idleRev;
int enemy_1_walkReverse[8];
char e1_walkReverse[8][100] = {  "image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_000.png","image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_001.png","image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_002.png" ,"image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_003.png" ,"image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_004.png","image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_005.png","image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_006.png","image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_007.png" };

//bool enemyKill = false;
struct Enemy
{
	int enemy_x;
	int enemy_y;
	int enemy_width;
	int enemy_height;

	//int enemy_index;
	int enemyWalk_index = 0;
	bool enemyIdleShow;
	//bool enemyWalkShow;
};
Enemy e1[FIRSTSTAGEENEMY];

void enemy1SetValue()
{
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		e1[i].enemy_x = 1280 + rand() % 900;
		e1[i].enemy_y = 130;
		e1[i].enemy_width = 70;
		e1[i].enemy_height = 120;

		//p1.enemy_index = 0;
		e1[i].enemyIdleShow = false;
		//p1.enemyWalkShow = false;
	}
}

void enemyMoveSet()
{
	enemy_1_idle = iLoadImage("image\\terrorist1\\Idle.png");
	for (int i = 0; i < 8; i++)
	{
		enemy_1_walk[i] = iLoadImage(e1_walk[i]);
	}

	//reverse image loading
	/*enemy_1_idleRev = iLoadImage("image\\Enemy\\walk\\Reverse\\1_terrorist_1_Walk_reverse_000.png");
	for (int i = 0; i < 8; i++)
	{
	enemy_1_walkReverse[i] = iLoadImage(e1_walkReverse[i]);
	}*/
}
/*void enemyMoveRight()
{
//function for moving enemy right
e1.enemy_x += 5;
e1.enemyWalk_index++;
if (e1.enemyWalk_index >= 8)
{
e1.enemyWalk_index = 0;
}
e1.enemyIdleShow = false;
}*/

void enemyMoveLeft()
{
	//function for moving enemy left
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		if (!e1[i].enemyIdleShow)
		{
			//enemyKill = false;
			e1[i].enemy_x -= ENEMYSPEED;
			e1[i].enemyWalk_index++;
			
			//enemyKill();
			if (e1[i].enemyWalk_index >= 8)
			{
				e1[i].enemyWalk_index = 0;
			}
			e1[i].enemyIdleShow = false;
		}
	}
}

//showing the images of enemy
void enemyShow()
{
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		if (!e1[i].enemyIdleShow)
			iShowImage(e1[i].enemy_x, e1[i].enemy_y, e1[i].enemy_width, e1[i].enemy_height, enemy_1_walk[e1[i].enemyWalk_index]);
		if (e1[i].enemy_x <= 950)
		{
			e1[i].enemyIdleShow = true;
			iShowImage(e1[i].enemy_x, e1[i].enemy_y, e1[i].enemy_width, e1[i].enemy_height, enemy_1_idle);
		}
	}
}


#endif // ENEMY_H_INCLUDED