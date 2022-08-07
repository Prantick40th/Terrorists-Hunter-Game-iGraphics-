#include "police.h"
#include "enemy.h"
#include "life.h"

#define BULLETHEIGHT 10
#define BULLETWIDTH 7
#define BULLETSPEED 10

//one bullet is a structure
int cnt = 0;//count bullet variable
bool showBullet1 = false, showBullet2 = false, showBullet3 = false;//boolean variable for showing bullet
bool showBullet4 = false;
bool showBullet5 = false;
bool showBullet6 = false;
bool showBullet7 = false;
bool showBullet8 = false;
bool showBullet9 = false;
bool showBullet10 = false;
bool showBullet11 = false;
bool showBullet12 = false;


//bullet image
int bullet;

int score = 0;

struct bullet1
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;
	
	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;

		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet1 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 = (boolean)false;

		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet1 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}


}b1;

struct bullet2
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;

	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet2 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}


	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 500;
				showBullet2 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b2;

struct bullet3
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;

		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet3 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}


	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;

		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet3 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b3;

struct bullet4
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet4 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet4 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b4;
struct bullet5
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet5 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet5 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b5;
struct bullet6
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet6 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet6 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b6;
struct bullet7
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet7 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet7 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b7;
struct bullet8
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet8 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet8 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b8;
struct bullet9
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet9 = false;
				x == (boolean)false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet9 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b9;
struct bullet10
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet10 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet10 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b10;
struct bullet11
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet11 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
		
	}

	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet11 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
		
	}

}b11;

struct bullet12
{
	int x = p1.police_x + p1.police_width, y = p1.police_y + p1.police_height - 55;


	void rend() {
		x += 10;
		if (x == 1280)
			x == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet12 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}
	int x1 = p2.police_x + p2.police_width, y1 = p2.police_y + p2.police_height - 55;
	void rend1() {
		x1 += 10;
		if (x1 == 1280)
			x1 == (boolean)false;
		for (int i = 0; i < FIRSTSTAGEENEMY; i++)
		{
			if (x1 >= e1[i].enemy_x)
			{
				e1[i].enemy_x = 1280 + rand() % 900;
				showBullet12 = false;
				e1[i].enemyIdleShow = false;
				score++;
				break;
			}
			else
				score = 0;
		}
	}

}b12;

struct enemyBullet
{
	int x;
	int y;
}eB1[FIRSTSTAGEENEMY];

void loadBullet()
{
	bullet = iLoadImage("image\\bullet1.png");
}

//bullet showing function
void showBullet()
{
	//iSetColor(0, 0, 255);
	if (firstCharacter)
	{
		/*if (cnt == 1)
			showBullet1 = true;
		if (showBullet1 == true) {
			
			iShowImage(b1.x, b1.y, 10, 7, bullet);
			b1.rend();
		}*/

		if (cnt == 2)
			showBullet2 = true;
		if (showBullet2 == true) {
			
			iShowImage(b2.x, b2.y, 10, 7, bullet);
			b2.rend();
		}

		if (cnt == 3)
			showBullet3 = true;
		if (showBullet3 == true) {
			
			iShowImage(b3.x, b3.y, 10, 7, bullet);
			b3.rend();
		}

		if (cnt == 4)
			showBullet4 = true;
		if (showBullet4 == true) {
			
			iShowImage(b4.x, b4.y, 10, 7, bullet);
			b4.rend();
		}

		if (cnt == 5)
			showBullet5 = true;
		if (showBullet5 == true) {
			
			iShowImage(b5.x, b5.y, 10, 7, bullet);
			b5.rend();
		}

		if (cnt == 6)
			showBullet6 = true;
		if (showBullet6 == true) {
			
			iShowImage(b6.x, b6.y, 10, 7, bullet);
			b6.rend();
		}

		if (cnt == 7)
			showBullet7 = true;
		if (showBullet7 == true) {
			
			iShowImage(b7.x, b7.y, 10, 7, bullet);
			b7.rend();
		}

		if (cnt == 8)
			showBullet8 = true;
		if (showBullet8 == true) {
			
			iShowImage(b8.x, b8.y, 10, 7, bullet);
			b8.rend();
		}

		if (cnt == 9)
			showBullet9 = true;
		if (showBullet9 == true) {
			
			iShowImage(b9.x, b9.y, 10, 7, bullet);
			b9.rend();
		}

		if (cnt == 10)
			showBullet10 = true;
		if (showBullet10 == true) {
			
			iShowImage(b10.x, b10.y, 10, 7, bullet);
			b10.rend();
		}

		if (cnt == 11)
			showBullet11 = true;
		if (showBullet11 == true) {
			
			iShowImage(b11.x, b11.y, 10, 7, bullet);
			b11.rend();
		}

		if (cnt == 12)
			showBullet12 = true;
		if (showBullet12 == true) {
			
			iShowImage(b12.x, b12.y, 10, 7, bullet);
			b12.rend();
		}
	}
	if (secondCharacter)
	{
		/*if (cnt == 1)
			showBullet1 = true;
		if (showBullet1 == true) {
			b1.rend1();
			iShowImage(b1.x1, b1.y1, 10, 7, bullet);
		}*/

		if (cnt == 2)
			showBullet2 = true;
		if (showBullet2 == true) {
			b2.rend1();
			iShowImage(b2.x1, b2.y1, 10, 7, bullet);
		}

		if (cnt == 3)
			showBullet3 = true;
		if (showBullet3 == true) {
			b3.rend1();
			iShowImage(b3.x1, b3.y1, 10, 7, bullet);
		}

		if (cnt == 4)
			showBullet4 = true;
		if (showBullet4 == true) {
			b4.rend1();
			iShowImage(b4.x1, b4.y1, 10, 7, bullet);
		}

		if (cnt == 5)
			showBullet5 = true;
		if (showBullet5 == true) {
			b5.rend1();
			iShowImage(b5.x1, b5.y1, 10, 7, bullet);
		}

		if (cnt == 6)
			showBullet6 = true;
		if (showBullet6 == true) {
			b6.rend1();
			iShowImage(b6.x1, b6.y1, 10, 7, bullet);
		}

		if (cnt == 7)
			showBullet7 = true;
		if (showBullet7 == true) {
			b7.rend1();
			iShowImage(b7.x1, b7.y1, 10, 7, bullet);
		}

		if (cnt == 8)
			showBullet8 = true;
		if (showBullet8 == true) {
			b8.rend1();
			iShowImage(b8.x1, b8.y1, 10, 7, bullet);
		}

		if (cnt == 9)
			showBullet9 = true;
		if (showBullet9 == true) {
			b9.rend1();
			iShowImage(b9.x1, b9.y1, 10, 7, bullet);
		}

		if (cnt == 10)
			showBullet10 = true;
		if (showBullet10 == true) {
			b10.rend1();
			iShowImage(b10.x1, b10.y1, 10, 7, bullet);
		}

		if (cnt == 11)
			showBullet11 = true;
		if (showBullet11 == true) {
			b11.rend1();
			iShowImage(b11.x1, b11.y1, 10, 7, bullet);
		}

		if (cnt == 12)
			showBullet12 = true;
		if (showBullet12 == true) {
			b12.rend1();
			iShowImage(b12.x1, b12.y1, 10, 7, bullet);
		}
	}
}




//set function of enemies bullet
void setEnemyBulletValue()
{
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		eB1[i].x = 950;//e1[i].enemy_x;//950;
		eB1[i].y = 250 - 67;//e1[i].enemy_y + e1[i].enemy_height - 67;//250-67;//e1[i].enemy_y + e1[i].enemy_height - 67;
	}
}

//changing coordinate of enemies bullet(rendering of enemies bullet)
void enemyBulletChange()
{
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		if (e1[i].enemyIdleShow)
		{
			eB1[i].x -= BULLETSPEED;
			if (eB1[i].x <= p1.police_x || eB1[i].x <= p2.police_x)
			{
				PL1.pLife_index++;
				if (PL1.pLife_index > 19) {
					policeDie = true;
				}
				eB1[i].x = 950;
			}
		}
	}

}

//Enemy bullet showing function
void enemyBulletShow()
{
	for (int i = 0; i < FIRSTSTAGEENEMY; i++)
	{
		if (e1[i].enemyIdleShow)
		{
			iShowImage(eB1[i].x, eB1[i].y, BULLETWIDTH, BULLETHEIGHT, bullet);
		}
	}
}





/*void enemyMoveLeft()
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
			if (b1.x == e1[i].enemy_x || b1.x1 == e1[i].enemy_x || b2.x == e1[i].enemy_x || b2.x1 == e1[i].enemy_x || b3.x == e1[i].enemy_x || b3.x1 == e1[i].enemy_x || b4.x == e1[i].enemy_x || b4.x1 == e1[i].enemy_x || b5.x == e1[i].enemy_x || b5.x1 == e1[i].enemy_x || b6.x == e1[i].enemy_x || b6.x1 == e1[i].enemy_x || b7.x == e1[i].enemy_x || b7.x1 == e1[i].enemy_x || b8.x == e1[i].enemy_x || b8.x1 == e1[i].enemy_x || b9.x == e1[i].enemy_x || b9.x1 == e1[i].enemy_x || b10.x == e1[i].enemy_x || b10.x1 == e1[i].enemy_x || b11.x == e1[i].enemy_x || b11.x1 == e1[i].enemy_x || b12.x == e1[i].enemy_x || b12.x1 == e1[i].enemy_x)
			{
				score++;
				e1[i].enemy_x = 1280 + rand() % 900;
			}
			else
				score = 0;
			if (e1[i].enemyWalk_index >= 8)
			{
				e1[i].enemyWalk_index = 0;
			}
			e1[i].enemyIdleShow = false;
		}
	}
}*/

//collision between bullet and enemy
/*void enemyKill()
{
	if (b1.x == e1->enemy_x || b1.x1 == e1->enemy_x || b2.x == e1->enemy_x || b2.x1 == e1->enemy_x)// || b3.x == e1[i].enemy_x || b3.x1 == e1[i].enemy_x || b4.x == e1[i].enemy_x || b4.x1 == e1[i].enemy_x || b5.x == e1[i].enemy_x || b5.x1 == e1[i].enemy_x || b6.x == e1[i].enemy_x || b6.x1 == e1[i].enemy_x || b7.x == e1[i].enemy_x || b7.x1 == e1[i].enemy_x || b8.x == e1[i].enemy_x || b8.x1 == e1[i].enemy_x || b9.x == e1[i].enemy_x || b9.x1 == e1[i].enemy_x || b10.x == e1[i].enemy_x || b10.x1 == e1[i].enemy_x || b11.x == e1[i].enemy_x || b11.x1 == e1[i].enemy_x || b12.x == e1[i].enemy_x || b12.x1 == e1[i].enemy_x)
	{
			e1->enemy_x = 1280 + rand() % 900;
	}
}*/