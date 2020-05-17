#include "LockdownMovementStrategy.h"

namespace corsim
{ 
    int LockdownMovementStrategy::movement(int counter, std::vector<Subject> &_subjects, int calculation){
        int numberInfected = 0;
        
        if (_running == false){
        int numberSubjects = _subjects.size() * 0.75;
        for(int i = 0; i < numberSubjects; i++){
            _subjects.at(i).setDontMove(true);
        }
        _running = true;
        }

        for(Subject& s : _subjects)
        {
            if(s.getDontMove() != true){
            s.set_x(s.x() + s.dx() * counter);
            s.set_y(s.y() + s.dy() * counter);

                if(s.infected())
                {
                    numberInfected++;
                }
            }
        }
        return numberInfected;
    }
}