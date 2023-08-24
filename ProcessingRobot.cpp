// ProcessingRobot.cpp
//
// Implementation file for a robot that processes items off a conveyor belt
// Initial revision: Donald G Dansereau
// Completed by:

#include <iostream>
#include <cstdlib>      // rand
#include <algorithm>    // std::max

#include "ProcessingRobot.h"

//---------------------------------------------------------------
void ProcessingRobot::Init( Conveyor* WhichConveyor, int CapacityItemsPerCycle )
{
    _Conveyor = WhichConveyor;
    _CapacityItemsPerCycle = CapacityItemsPerCycle;
    _TotNumProcessed = 0;
    _TotCapacity = 0;
}

//---------------------------------------------------------------
void ProcessingRobot::ProcessItems()
{
    int NumProcessed = _Conveyor->RemoveItems( _CapacityItemsPerCycle );
    _TotNumProcessed += NumProcessed;
    _TotCapacity += _CapacityItemsPerCycle;

    std::cout << "Processed " << NumProcessed << " items" << std::endl;
}

//---------------------------------------------------------------
void ProcessingRobot::Report()
{
    double PercentUtilisation = double(_TotNumProcessed) * 100.0 / double(_TotCapacity);
    std::cout << "Total processed: " << _TotNumProcessed << ", utilisation: " << PercentUtilisation << "%" << std::endl;
}



