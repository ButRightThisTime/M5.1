#include "ShiftSupervisor.h"
ShiftSupervisor::ShiftSupervisor(std::string name, int employeeNum, std::tuple<int, int, int> hireDate, double annualSallary, double annualProductionBonus) : Employee(name, employeeNum, hireDate) {
	setAnnualSallary(annualSallary);
	setAnnualProductionBonus(annualProductionBonus);
}
void ShiftSupervisor::setAnnualProductionBonus(double apb) {
	annualPrudctionBonus = apb;
}
void ShiftSupervisor::setAnnualSallary(double as) {
	annualSallary = as;
}
void ShiftSupervisor::printShiftSupervisor() {
	printEmployee();
	std::cout << "\nAnnual Sallary: " << annualSallary << "\nAnnual Production Bonus" << annualPrudctionBonus;
}