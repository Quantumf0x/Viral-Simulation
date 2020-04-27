#include "LockdownMovementStrategy.h"

namespace corsim
{
    int LockdownMovementStrategy::getSpeed(){
        return this->speed;
    }
    void LockdownMovementStrategy::setSpeed(int currentSpeed){
        this->speed = currentSpeed;
    }
}