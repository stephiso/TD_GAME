#include "Creep.h"

#pragma once
class Projectile
{
public:

	Projectile();
	~Projectile();

	//projectile moves
	void move();

	//check if it hits the target, removes the damage
	bool hit();


	//if the projectile hits a creep, it dissapears, or also dissapear when the game ends
	void die();

	//main method that calls all 3 functions above
	void calculate();

private:
	int posX;
	int posY;

	//Moving speed
	int speed;
	//int damage

	//type of projectile
	int type;


	Creep * target;
		

};