#include "MovementStrategy.h"

namespace corsim
{
class RegularMovementStrategy : public MovementStrategy{
    public:
        virtual int getSpeed();
        virtual void setSpeed(int currentSpeed);
    private:
};
}