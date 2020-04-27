#pragma once
namespace corsim
{
    class MovementStrategy {
    public:
      int speed;
      virtual int getSpeed() = 0;
      virtual void setSpeed(int currentSpeed) = 0;
    private:
    };
}