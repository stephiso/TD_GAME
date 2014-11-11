#include "Projectile.h"


Projectile::Projectile()
{
}


Projectile::~Projectile()
{
}


void Projectile::calculate()
{
	move();

	if(hit())
		die();
}

void Projectile::move()
{
	//move according to the target location
}

bool Projectile::hit()
{
	//if target hits the target by a few pixel
	return true;

	//if target misses target
	return false;
}

void Projectile::die()
{
	//delete the projectile
	//~Projectile();
}