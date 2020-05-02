#include "LockdownMovementStrategy.h"

namespace corsim
{
    //constructor to set speed
    LockdownMovementStrategy::LockdownMovementStrategy(){
        this->setSpeed(0);
    }
    int LockdownMovementStrategy::getSpeed(){
        return this->speed;
    }
    void LockdownMovementStrategy::setSpeed(int currentSpeed){
        this->speed = currentSpeed;
    }
}