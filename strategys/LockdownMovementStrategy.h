#include "MovementStrategy.h"
namespace corsim
{
class LockdownMovementStrategy : public MovementStrategy{
  public:
  int movement(int counter, std::vector<Subject> &_subjects, int calculation);
  private:
  bool _running = false;
};
}