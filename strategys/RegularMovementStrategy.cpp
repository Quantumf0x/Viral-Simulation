#include "RegularMovementStrategy.h"
namespace corsim
{
    int RegularMovementStrategy::getSpeed(){
        return this->speed;
    }
    void RegularMovementStrategy::setSpeed(int currentSpeed){
        this->speed = currentSpeed;
    }
}