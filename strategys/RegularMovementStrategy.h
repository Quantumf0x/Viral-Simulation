#include "MovementStrategy.h"

namespace corsim
{
class RegularMovementStrategy : public MovementStrategy{
    public:
        RegularMovementStrategy();
        int getSpeed();
        void setSpeed(int currentSpeed);
    private:
};
}