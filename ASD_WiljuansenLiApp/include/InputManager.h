#pragma once
#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Entity.h"

using namespace ci;
using namespace ci::app;
using namespace std;


class InputManager
{
public:
	InputManager(void);
	~InputManager(void);
	InputManager(Entity *ent, void *MouseListener(void), void *KeyListener(void));

	void mouseDown(MouseEvent e);
	void keyDown(KeyEvent event);
	void keyUp(KeyEvent event);
	
	void *mouseInput(void);
	void *keyBoardInput(void);
private:
	Entity *entity;
};

