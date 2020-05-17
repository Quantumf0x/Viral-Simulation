#pragma once
#include <vector>
#include "../subject.h"

namespace corsim
{
    class MovementStrategy {
    public:
      virtual int movement(int counter, std::vector<Subject> &_subjects, int calculation) = 0;
    };
}