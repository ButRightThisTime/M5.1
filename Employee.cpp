#include <string>
#include <tuple>
#include "Employee.h"

Employee::Employee(std::string name, int employeeNum , std::tuple<int, int, int> hireDate) {
	setName(name);
	setEmployeeNum(employeeNum);
	setHireDate(hireDate);
}
void Employee::setName(std::string n) {
	name = n;
}
void Employee::setEmployeeNum(int e) {
	employeeNum = e;
}
void Employee::setHireDate(std::tuple<int, int, int> h) {
	hireDate = h;
}
void Employee::printEmployee() {
	std::cout << "\n________" << "\nEmployee: " << name << "\nEmployee Number: " << employeeNum <<
		"\nHire Date: " << std::get<0>(hireDate) << "/" << std::get<1>(hireDate) << "/" << std::get<2>(hireDate);

}