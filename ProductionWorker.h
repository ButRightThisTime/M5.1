#pragma once
#include "Employee.h"
class ProductionWorker: public Employee{
public:
	ProductionWorker(std::string name, int employeeNum , std::tuple<int, int, int> hireDate , int shift, double hourlyPay);
	inline int getShift() const { return shift; };
	inline double getHourlyPay() const { return hourlyPay; };
	void setShift(int shift);
	void setHourlyPay(double hourlyPay);
	void printProductionWorker();
private:
	int shift;
	double hourlyPay;
};

