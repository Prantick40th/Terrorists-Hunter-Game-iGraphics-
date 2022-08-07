#include"police.h"
#define number 12
int k = 0;


struct bullet {
	int x;
	int y;
	bool show;
} bullets[number];

void setValue() {
	for (int i = k; i < number; i++) {
		bullets[i].x = p1.police_x + p1.police_width;
		bullets[i].y = p1.police_y + p1.police_height - 55;
		bullets[i].show = false;
	}
}

void abc()
{
	for (int i = 0; i < number; i++)
	{
		if (bullets[i].show) {
			iFilledCircle(bullets[i].x, bullets[i].y, 10, 100);
			bullets[i].x += 16;
		}

		if (bullets[i].x== 1600)
			bullets[i].show = false;
	}
}