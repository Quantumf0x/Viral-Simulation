#include "MovementStrategy.h"
namespace corsim
{
class LockdownMovementStrategy : public MovementStrategy{
  public:
    virtual int getSpeed();
    virtual void setSpeed(int currentSpeed);
  private:
};
}