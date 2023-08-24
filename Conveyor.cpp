// Conveyor.cpp
//
// Implementation file for a simulated conveyor belt
// Initial revision: Donald G Dansereau, 2019
// Completed by:

#include <iostream>     // std::cout
#include <algorithm>    // std::max

#include "Conveyor.h"

//---------------------------------------------------------------
void Conveyor::Init()
{
    _NumItemsOnConveyor = 0;
}

//---------------------------------------------------------------
void Conveyor::AddItems( int n )
{
    _NumItemsOnConveyor += n;
}

//---------------------------------------------------------------
int Conveyor::RemoveItems( int n )
{
    // Note that we cannot have a negative number of items on belt
    int NumRemoved = std::min( _NumItemsOnConveyor, n );
    _NumItemsOnConveyor -= NumRemoved;
    return NumRemoved;
}

//---------------------------------------------------------------
void Conveyor::Report()
{
    std::cout << "Items on conveyor: " << _NumItemsOnConveyor << std::endl;
}

