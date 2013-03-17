#include "InputComponent.h"
#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Entity.h"

using namespace ci;
using namespace ci::app;
using namespace std;

InputComponent::InputComponent(void)
{
}

InputComponent::~InputComponent(void)
{
}

InputComponent::InputComponent(Entity *ent)
{
	entity = ent;
}

void InputComponent::doStuff(int input)
{	
	if(input == 4)
	{
		entity->velocity.x = 5; 
	}
	else if(input == 8)
	{
		entity->velocity.x = -5;
	}
	else if(input == 12)
	{
		entity->velocity.y = -5;
	}
	else if(input == 16)
	{
		entity->velocity.y = 5;
	}
	else if(input == 20)
	{
		entity->velocity = Vec2f(0,0);
	}
}
