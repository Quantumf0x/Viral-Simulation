#include "MovementStrategy.h"
namespace corsim
{
class LockdownMovementStrategy : public MovementStrategy{
  public:
    LockdownMovementStrategy();
    int getSpeed();
    void setSpeed(int currentSpeed);
  private:
};
}