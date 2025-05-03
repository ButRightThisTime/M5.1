#include "ProductionWorker.h"
ProductionWorker::ProductionWorker(std::string name, int employeeNum, std::tuple<int, int, int> hireDate, int shift , double hourlyPay) : Employee(name,employeeNum,hireDate){
	setShift(shift);
	setHourlyPay(hourlyPay);
}
void ProductionWorker::setShift(int s) {
	shift = s;
}
void ProductionWorker::setHourlyPay(double hp) {
	hourlyPay = hp;
}
void ProductionWorker::printProductionWorker() {
	printEmployee();
	std::cout << "\nShift: " << shift << "\nHourly Pay: " << hourlyPay;
}
