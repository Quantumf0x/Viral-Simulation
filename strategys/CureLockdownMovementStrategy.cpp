#include "CureLockdownMovementStrategy.h"
#include <iostream>


namespace corsim
{ 
    int CureLockdownMovementStrategy::movement(int counter, std::vector<Subject> &_subjects, int nrOfSubjects){
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
                    s.counttick++;
                    if (s.counttick == 100)
                    {
                        s.remove_infected();
                        std::cout << "cured" << std::endl;
                        s.counttick = 0;
                    }
                if (s.countCuretick == 75)
                {
                    s.countCuretick = 0;
                    s.curedSubject = false;
                }
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
}//namespace