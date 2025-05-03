#pragma once
#include <string>
#include <iostream>
#include <tuple>
class Employee {
public:
	Employee(std::string name, int employeeNum, std::tuple<int, int, int> hireDate);
	inline std::string getName() const { return name; };
	inline int getEmployeeNum() const { return employeeNum; };
	inline std::tuple<int,int,int> getHireDate() const { return hireDate; };
	void setName(std::string);
	void setEmployeeNum(int);
	void setHireDate(std::tuple<int, int, int>);
	void printEmployee();
protected:
	std::string name;
	int employeeNum;
	std::tuple<int, int, int> hireDate;
};

