﻿#ifndef PARAMETER_H
#define PARAMETER_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

#include <iostream>

const int SCREEN_WIDTH = 1440;
const int SCREEN_HEIGHT = 810;

static SDL_Window* gWindow = NULL;
static SDL_Renderer* gRenderer = NULL;
static SDL_Texture* gBackgroundTexture = NULL;
static SDL_Texture* gCardTexture = NULL;


const int SHAKE_DURATION_SUMMON = 2000;

#endif
