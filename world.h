#pragma once
#include <iostream>
#include "organism.h"
#include "grid.h"

class World
{
public:
	World();
	~World();

public:
	//void makeTurn();
	//void drawWorld();
	void spawn(Organism& organism, Cell** worldgrid);

};

