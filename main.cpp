// main.cpp
//
// Main file for simulated conveyor belt
// Initial revision: Donald G Dansereau, 2019
// Completed by:

#include <iostream>
#include <cstdlib>      // rand
#include <algorithm>    // std::max

#include "Conveyor.h"
#include "LoadingRobot.h"
#include "ProcessingRobot.h"


int main()
{
    Conveyor myConveyor;
    LoadingRobot myLoader;
    ProcessingRobot myProcessor;

    myConveyor.Init();
    myLoader.Init( &myConveyor );

    const int ProcessorCapacity_ItemsPerCycle = 5;
    myProcessor.Init( &myConveyor, ProcessorCapacity_ItemsPerCycle );

    while( 1 )
    {
        myLoader.AddItems();
        myConveyor.Report();
        myProcessor.ProcessItems();
        myProcessor.Report();
        myConveyor.Report();
    }
}


