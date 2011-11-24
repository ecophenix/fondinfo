/*
 * Example used in programming courses at University of Parma, IT.
 * Author: Michele Tomaiuolo - tomamic@ce.unipr.it - 2010
 *
 * This is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License, version 3 or
 * later. See <http://www.gnu.org/licenses/>.
 */

#include "actor.h"

const int Actor::DY[] = {-1, -1,  0, +1, +1, +1,  0, -1};
const int Actor::DX[] = { 0, +1, +1, +1,  0, -1, -1, -1};

Actor::Actor(Game* game, int y, int x)
{
    this->game = game;
    this->y = y;
    this->x = x;
    z = 0;
    alive = true;
    game->addActor(this);
}

void Actor::setX(int x)
{
    this->x = x;
}

int Actor::getX()
{
    return x;
}

void Actor::setY(int y)
{
    this->y = y;
}

int Actor::getY()
{
    return y;
}

void Actor::setZ(int z)
{
    this->z = z;
}

int Actor::getZ()
{
    return z;
}

bool Actor::isAt(int y, int x)
{
    return (alive && this->y == y && this->x == x);
}

bool Actor::isAlive()
{
    return alive;
}