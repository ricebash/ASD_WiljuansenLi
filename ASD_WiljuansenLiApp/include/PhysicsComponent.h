class Entity;
#pragma once
#include <string>
#include "cinder/app/AppBasic.h"

using namespace ci;
using namespace ci::app;
using namespace std;
class PhysicsComponent
{
public:
	PhysicsComponent(void);
	~PhysicsComponent(void);
	PhysicsComponent(Entity *entity);
	void update();

private:
Entity *entity;
};

