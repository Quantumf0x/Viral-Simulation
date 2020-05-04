// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include <math.h>
#include "strategys/MovementStrategy.h"

namespace corsim
{

Subject::Subject(int x, int y, int radius, bool infected)
{
    this->_x = x;
    this->_y = y;
    this->_radius = radius;
    this->_infected = infected;
}
//welke strategie gebruiken
void Subject::strategy(corsim::MovementStrategy *current_strategy){
    this->current_strategy = current_strategy;
}
double Subject::x()
{
    return this->_x;
}

double Subject::y()
{
    return this->_y;
}

void Subject::set_x(double x)
{
    this->_x = x;
}

void Subject::set_y(double y)
{
    this->_y = y;
}

double Subject::dx()
{
    return this->_dx;
}

double Subject::dy()
{
    return this->_dy;
}

void Subject::set_dx(double dx)
{
    this->_dx = dx;
}

void Subject::set_dy(double dy)
{
    this->_dy = dy;
}

int Subject::radius()
{
    return this->_radius;
}

bool Subject::infected()
{
    if(this->_infected == false){
        return false;
    }
    else{
    return true;
    }
}
//To DO: only infect when subject is not immuun
void Subject::infect(int counter)
{
    if(this->_cured == false){   
        this->_infected = counter;
    }
}
//checks time passed infected subject after .. seconds add immunity
int Subject::timepassedinfected(){
    return this->_cured;
}
//cure 
bool Subject::cured(){
    //return this->_cured;
    if(this->_cured == false){
        return false;
    }
    else{
    return true;
    }
}
void Subject::cure()
{
    this->_cured = true;
}
//adds immunity and removes infection
void Subject::remove_infected(int counter){
    this->_infected = false;
    this->_cured = counter; // set on current tick then count ticks until 20 sec then remove immunity
}
//remove immunity from cured person
void Subject::remove_immunity(){
    this->_cured = false;
}
//checks time passed immunity subject
int Subject::timepassedimmunity(){
    return this->_cured;
}
double Subject::angle()
{
    return atan2(_dy,_dx);
}

double Subject::speed()
{
    return sqrt(_dx * _dx + _dy * _dy);
}
//speed change on strategy
int Subject::currentSpeed(){
    return this->current_strategy->getSpeed();
}

}//namespace