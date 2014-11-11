#include "Projectile.h"


Projectile::Projectile()
{
}


Projectile::~Projectile()
{
	squad = NULL;
}


void Projectile::calculate()
{
	move();

	if(hit())
		die();
}

void Projectile::move()
{

vector<Creep*> creeps = squad->getCreeps();

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