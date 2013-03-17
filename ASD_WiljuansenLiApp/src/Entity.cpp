#include "..\include\Entity.h"

using namespace ci;
using namespace ci::app;
using namespace std;


Entity::Entity(void)
{
}


Entity::~Entity(void)
{
}

Entity::Entity( Vec2f p, Vec2f hd, string filename, int fc, int fr, int fn )
{
	position = p;
	half_dimen = hd;
	velocity = Vec2f(0,0);
	graphics = GraphicsManager( filename, fc, fr, fn );
	//physics = PhysicsComponent(this);
}


void Entity::draw()
{
	/*graphics.draw( texture, Area( position.x - half_dimen.x, position.y - half_dimen.y,
		position.x + half_dimen.x, position.y + half_dimen.y ) );*/
	graphics.draw( position );
}

void Entity::update()
{
	//physics.update();
}