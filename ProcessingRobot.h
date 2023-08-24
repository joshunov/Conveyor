// ProcessingRobot.h
//
// Header file for a robot that processes items off a conveyor belt
// Initial revision: Donald G Dansereau, 2019
// Completed by:

#ifndef _PROCESSINGROBOT_H
#define _PROCESSINGROBOT_H

#include "Conveyor.h"


//-------------------------------------------------------------------
// Simulate a processing robot that removes items from a conveyor belt.
// Note that Init sets a pointer to the conveyor the robot will use.
class ProcessingRobot
{
    public:
        void Init( Conveyor* WhichConveyor, int CapacityItemsPerCycle );
        void ProcessItems();
        void Report();
        
    private:
        Conveyor* _Conveyor;
        int _CapacityItemsPerCycle;
        int _TotNumProcessed;
        int _TotCapacity;

};

#endif
