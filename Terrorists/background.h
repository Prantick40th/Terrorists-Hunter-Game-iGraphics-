#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

#define BGROADSPEED 7 
#define BGHILLSPEED 2
#define BGSKYSPEED 1
#define TRAINSPEED 10
#define SCREENWIDTH 1280


//background
//stage 1
//decleration for road
int bg1_road[2];
char bg1_road_ar[2][100] = { "image\\bg\\stage_1\\Asset1.png", "image\\bg\\stage_1\\Asset1.png" };
//decleration for hill
int bg1_hill[2];
char bg1_hill_ar[2][100] = { "image\\bg\\stage_1\\Asset2.png", "image\\bg\\stage_1\\Asset2.png" };
//decleration for sky
int bg1_sky[2];
char bg1_sky_ar[2][100] = { "image\\bg\\stage_1\\Asset3.png", "image\\bg\\stage_1\\Asset3.png" };
//stage2
//decleration for road
int bg2_road[2];
char bg2_road_ar[2][100] = { "image\\bg\\stage_2\\Asset1.png","image\\bg\\stage_2\\Asset1.png" };
//decleration for hill
int bg2_hill[2];
char bg2_hill_ar[2][100] = { "image\\bg\\stage_2\\Asset2.png", "image\\bg\\stage_2\\Asset2.png" };
//decleration for sky
int bg2_sky[2];
char bg2_sky_ar[2][100] = { "image\\bg\\stage_2\\Asset3.png", "image\\bg\\stage_2\\Asset3.png" };


//decleration for train
int train;
int timeForTrain = 0;

struct Background
{
	int bg_road_x1;
	int bg_road_x2;
	int bg_road_y1;
	int bg_road_y2;
	int bg_hill_x1;
	int bg_hill_x2;
	int bg_hill_height;
	int bg_sky_x1;
	int bg_sky_x2;
	int bg_index;
	int bg_height;
	int bg_width;
	int train_x;
	int train_y;
	int train_height;
	int train_width;
}BG;

//loading image of backgorund
void backgroundSet()
{
	//Stage 1 image loading
	//road image
	for (int i = 0; i < 2; i++)
	{
		bg1_road[i] = iLoadImage(bg1_road_ar[i]);
	}
	//hill image
	for (int i = 0; i < 2; i++)
	{
		bg1_hill[i] = iLoadImage(bg1_hill_ar[i]);
	}
	//sky image
	for (int i = 0; i < 2; i++)
	{
		bg1_sky[i] = iLoadImage(bg1_sky_ar[i]);
	}

	//Stage 2 image loading
	//road image
	for (int i = 0; i < 2; i++)
	{
		bg2_road[i] = iLoadImage(bg2_road_ar[i]);
	}
	//hill image
	for (int i = 0; i < 2; i++)
	{
		bg2_hill[i] = iLoadImage(bg2_hill_ar[i]);
	}
	//sky image
	for (int i = 0; i < 2; i++)
	{
		bg2_sky[i] = iLoadImage(bg2_sky_ar[i]);
	}


	//train image load
	train = iLoadImage("image\\Train.png");
}

//this function is for set values or assign values into variables
void backgroundSetValue()
{
	BG.bg_road_x1 = 0;
	BG.bg_road_x2 = 1280;
	BG.bg_road_y1 = 0;
	BG.bg_road_y2 = 0;
	BG.bg_hill_x1 = 0;
	BG.bg_hill_x2 = 1280;
	BG.bg_hill_height = 500;
	BG.bg_sky_x1 = 0;
	BG.bg_sky_x2 = 1280;
	BG.bg_width = 1280;
	BG.bg_height = 720;
	BG.bg_index = 0;
	BG.train_x = 1280;
	BG.train_y = 30;
	BG.train_height = 200;
	BG.train_width = 2000;
}

//function for sky background changing or rendering
void backgroundChange()
{
	BG.bg_sky_x1 -= BGSKYSPEED;
	BG.bg_sky_x2 -= BGSKYSPEED;
	if (BG.bg_sky_x1 + SCREENWIDTH < 0)
	{
		BG.bg_sky_x1 = BG.bg_sky_x2 + SCREENWIDTH;
	}
	if (BG.bg_sky_x2 + SCREENWIDTH < 0)
	{
		BG.bg_sky_x2 = BG.bg_sky_x1 + SCREENWIDTH;
	}
}

//function for road and hill changing or rendering
void roadBackgroundChange()
{
	BG.bg_hill_x1 -= BGHILLSPEED;
	BG.bg_hill_x2 -= BGHILLSPEED;
	if (BG.bg_hill_x1 + SCREENWIDTH < 0)
	{
		BG.bg_hill_x1 = BG.bg_hill_x2 + SCREENWIDTH;
	}
	if (BG.bg_hill_x2 + SCREENWIDTH < 0)
	{
		BG.bg_hill_x2 = BG.bg_hill_x1 + SCREENWIDTH;
	}

	BG.bg_road_x1 -= BGROADSPEED;
	BG.bg_road_x2 -= BGROADSPEED;

	if (BG.bg_road_x1 + SCREENWIDTH < 0)
	{
		BG.bg_road_x1 = BG.bg_road_x2 + SCREENWIDTH;
	}
	if (BG.bg_road_x2 + SCREENWIDTH < 0)
	{
		BG.bg_road_x2 = BG.bg_road_x1 + SCREENWIDTH;
	}
}

void moveTrain()
{
	BG.train_x -= TRAINSPEED;
	if (BG.train_x+20000 <= 0)
	{
		BG.train_x = SCREENWIDTH;
	}
}

//this function for showing the background
void backgroundRoadShow()
{
	//sky
	iShowImage(BG.bg_sky_x1, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg1_sky[0]);
	iShowImage(BG.bg_sky_x2, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg1_sky[1]);

	//hill
	iShowImage(BG.bg_hill_x1, BG.bg_road_y1, BG.bg_width, BG.bg_hill_height, bg1_hill[0]);
	iShowImage(BG.bg_hill_x2, BG.bg_road_y1, BG.bg_width, BG.bg_hill_height, bg1_hill[1]);
	//road
	iShowImage(BG.bg_road_x1, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg1_road[0]);
	iShowImage(BG.bg_road_x2, BG.bg_road_y2, BG.bg_width, BG.bg_height, bg1_road[1]);


	//backgroundChange();
}
void stage2BackgroundShow()
{
	//sky
	iShowImage(BG.bg_sky_x1, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg2_sky[0]);
	iShowImage(BG.bg_sky_x2, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg2_sky[1]);

	//hill
	iShowImage(BG.bg_hill_x1, BG.bg_road_y1, BG.bg_width, BG.bg_hill_height, bg2_hill[0]);
	iShowImage(BG.bg_hill_x2, BG.bg_road_y1, BG.bg_width, BG.bg_hill_height, bg2_hill[1]);
	//road
	iShowImage(BG.bg_road_x1, BG.bg_road_y1, BG.bg_width, BG.bg_height, bg2_road[0]);
	iShowImage(BG.bg_road_x2, BG.bg_road_y2, BG.bg_width, BG.bg_height, bg2_road[1]);


	//backgroundChange();

	
}
void trainShow()
{
	//train show
	iShowImage(BG.train_x, BG.train_y, BG.train_width, BG.train_height, train);
	moveTrain();
}

#endif // BACKGROUND_H_INCLUDED
