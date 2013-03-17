#pragma once
#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Entity.h"

using namespace ci;
using namespace ci::app;
using namespace std;


class InputComponent
{
public:
	InputComponent(void);
	~InputComponent(void);
	InputComponent(Entity *ent);

	void doStuff(int input);
	
	//void *mouseInput(void);
	//void *keyBoardInput(void);
private:
	Entity *entity;
};

