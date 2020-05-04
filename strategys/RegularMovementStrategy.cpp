#include "RegularMovementStrategy.h"
namespace corsim
{
 int RegularMovementStrategy::movement(int counter, std::vector<Subject> &_subjects, int nrOfSubjects){
    int numberInfected = 0;

    for(Subject& s : _subjects)
    {
        s.set_x(s.x() + s.dx() * counter);
        s.set_y(s.y() + s.dy() * counter);

        if(s.infected())
        {
            numberInfected++;
        }
    }
        return numberInfected;
 }
}