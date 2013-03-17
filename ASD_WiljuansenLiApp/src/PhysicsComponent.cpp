#include "../include/PhysicsComponent.h"
#include "Entity.h"


PhysicsComponent::PhysicsComponent(void)
{
}


PhysicsComponent::~PhysicsComponent(void)
{
}


PhysicsComponent::PhysicsComponent(Entity *ent)
{
	entity = ent;
	
}

void PhysicsComponent::update()
{
	entity->position.x += entity->velocity.x;
	entity->position.y += entity->velocity.y;
}