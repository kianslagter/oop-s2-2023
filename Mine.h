#pragma once
#include "GameEntity.h"
#include "Explosion.h"
using namespace std;

class Mine : public GameEntity {
public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {}

    Explosion explode() {
        setType('X');
        return Explosion(get<0>(getPos()), get<1>(getPos()));
    }
};
