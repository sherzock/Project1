#ifndef __MODULESCENESTAGE1_H__
#define __MODULESCENESTAGE1_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;
typedef struct _Mix_Music Mix_Music;

class ModuleSceneStage1 : public Module
{
public:
	ModuleSceneStage1();
	~ModuleSceneStage1();

	bool Start();
	bool CleanUp();
	update_status Update();

public:
	
	SDL_Texture* graphics = nullptr;
	SDL_Texture* back = nullptr;
	SDL_Texture* hud = nullptr;
	SDL_Rect ground;
	SDL_Rect background;
	Animation flag;
	SDL_Rect ship;
	Animation people;
	Mix_Music* music;
};

#endif // __MODULESCENESTAGE1_H__