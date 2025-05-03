// Factory Workers Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "ShiftSupervisor.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
int main()
{
    ProductionWorker pd1("Bob", 0, std::make_tuple(1, 2, 3), 1, 15);
    ProductionWorker pd2("Billy", 1, std::make_tuple(1, 2, 3), 2, 15);
    pd1.printProductionWorker();
    pd2.printProductionWorker();
    ShiftSupervisor ss1("Karol",2,std::make_tuple(0,2,3),50000,1000);
    ss1.printShiftSupervisor();
    TeamLeader tl1("Dave", 3, std::make_tuple(4, 2, 0), 2, 20, 5000, 100, 2);
    tl1.printTeamLeader();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
