#include "..\include\InputManager.h"
#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

InputManager::InputManager(void)
{
}

InputManager::InputManager(Entity *ent, void *MouseListener(void), void *KeyListener(void))
{
	entity = ent;
	mouseInput = MouseListener;
	keyBoardInput = KeyListener;
}

InputManager::~InputManager(void)
{
}



void mouseDown(MouseEvent e)
{	
}

void keyDown(KeyEvent event)
{
	if(event.getCode() == KeyEvent::KEY_RIGHT)
	{
	}
}

void keyUp(KeyEvent event);
{

}