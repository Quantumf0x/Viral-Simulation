#include "MovementStrategy.h"

namespace corsim
{
class RegularMovementStrategy : public MovementStrategy{
    public:
 int movement(int counter, std::vector<Subject> &_subjects, int calculation);
    private:
};
}