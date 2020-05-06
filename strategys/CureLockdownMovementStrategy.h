#include "MovementStrategy.h"
namespace corsim
{
class CureLockdownMovementStrategy : public MovementStrategy{
  public:
  int movement(int counter, std::vector<Subject> &_subjects, int nrOfSubjects);
  private:
  bool _running = false;
};
}