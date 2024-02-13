#pragma once

// for linker 
#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")
#pragma comment(lib, "SDL2_image.lib")
#pragma comment(lib, "SDL2_mixer.lib")
#pragma comment(lib, "SDL2_ttf.lib")

// SDL 
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

// C++
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <map>
#include <fstream>
#include <ctime>

#include <stdio.h>
#include <stdlib.h>

// window
extern SDL_Window* gWin;
extern SDL_Renderer* gRend;

// frame rate
const int FPS = 60;
const int TPF = 1000 / FPS;

// resolution
static int WIDTH = 1920;
static int HEIGHT = 1080;
const int VERTICAL_BORDER = WIDTH / 50;
const int HORIZONTAL_BORDER = HEIGHT / 50;

// the level
const int SURFACE_TILE_SIZE = 512;
const int LEVEL_SIZE = 25;
const int LEVEL_WIDTH = SURFACE_TILE_SIZE * LEVEL_SIZE;
const int LEVEL_HEIGHT = SURFACE_TILE_SIZE * LEVEL_SIZE;

// tetxtures
const int TRESS_CLIP = 14;
const int CROSSHAIR_SIZE = HEIGHT / 35;

// level entities properties 
static int COLLIDER_TOLERANCE = 2;

// objs
const int TOTAL_OBJECTIVE = 5;

// player
const int PLAYER_SIZE = 100;
const int PLAYER_STATE = 4;
const int PLAYER_SPEED = 300;
const int PLAYER_WEAPON_SLOT = 2;

// weapon
const int BULLET_SPEED = 2500;
const int BULLET_SIZE = 15;

// weapon : rifle
static std::string RIFLE_NAME = "M4A4";
static float RIFLE_DAMAGE = 3.5F;
static float RATE_OF_FIRE = 0.2F;
static int RIFLE_CLIP_SIZE = 30;
static float RIFLE_RELOAD_TIME = 2.0f;

// bald guys
const int BG_HEALTH = 20;
const int BG_SPEED = PLAYER_SPEED;
const float BG_DAMAGE = 2.5F;
const float BG_ATTACK_RANGE = 20.0F;
const float BG_ATTACK_SPEED = 0.35F;

