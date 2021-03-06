#ifndef __MODULESCENECHOOSEPLAYER_H__
#define __MODULESCENECHOOSEPLAYER_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;

class ModuleSceneChoosePlayer : public Module
{
public:
	ModuleSceneChoosePlayer();
	~ModuleSceneChoosePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture * player1 = nullptr;
	SDL_Texture* player2 = nullptr;
	SDL_Texture* graphics = nullptr;
	SDL_Rect background;
	Uint32 start_time = 0;
	Uint32 current_time = 0;
};

#endif // __MODULESCENECHOOSEPLAYER_H__