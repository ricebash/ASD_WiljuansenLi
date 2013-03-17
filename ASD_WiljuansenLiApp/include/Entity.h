#pragma once

#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder\ImageIo.h"
#include "cinder\gl\Texture.h"
#include "GraphicsManager.h"
#include "PhysicsComponent.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Entity
{
public:
	Entity(void);
	~Entity(void);
	Entity( Vec2f p, Vec2f hd, string filename, int fc, int fr, int fn );
	void draw();
	void update();
	Vec2f position, half_dimen,velocity;
	gl::Texture texture;
private:
	GraphicsManager graphics;
	PhysicsComponent physics;
};

