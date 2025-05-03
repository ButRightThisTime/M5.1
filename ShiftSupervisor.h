#pragma once
#include "Employee.h"
class ShiftSupervisor: public Employee{
public:
	ShiftSupervisor(std::string, int employeeNum, std::tuple<int, int, int> hireDate , double annualSallary , double annualProductionBonus);
	inline double getAnnualSallary() const { return annualSallary; };
	inline double getAnnualProductionBonus() const { return annualPrudctionBonus; };
	void setAnnualSallary(double as);
	void setAnnualProductionBonus(double apb);
	void printShiftSupervisor();
private:
	double annualSallary;
	double annualPrudctionBonus;
};

