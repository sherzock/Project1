#ifndef __MODULESCENEMAINMENU_H__
#define __MODULESCENEMAINMENU_H__

#include "Module.h"
#include "Animation.h"
#include "Globals.h"

struct SDL_Texture;
typedef struct _Mix_Music Mix_Music;

class ModuleSceneMainMenu : public Module
{
public:
	ModuleSceneMainMenu();
	~ModuleSceneMainMenu();

	bool Start();
	update_status Update();
	bool CleanUp();

public:

	SDL_Texture* graphics = nullptr;
	SDL_Rect ground;
	SDL_Rect roof;
	SDL_Rect foreground;
	SDL_Rect background;
	Animation water;
	Mix_Music* music;
};

#endif // __MODULESCENEMAINMENU_H__