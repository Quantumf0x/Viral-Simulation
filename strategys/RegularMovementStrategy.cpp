#include "RegularMovementStrategy.h"
namespace corsim
{
    //constructor to set speed
    RegularMovementStrategy::RegularMovementStrategy(){
        this->setSpeed(10);
    }
    int RegularMovementStrategy::getSpeed(){
        return this->speed;
    }
    void RegularMovementStrategy::setSpeed(int currentSpeed){
        this->speed = currentSpeed;
    }
}