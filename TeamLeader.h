#pragma once
#include "ProductionWorker.h"
class TeamLeader: public ProductionWorker{
public:
	TeamLeader(std::string name, int employeeNum, std::tuple<int, int, int> hireDate, int shift, double hourlyPay,double monthlyBonus,int reqTrainingHrs,int attendedTrainingHrs);
	inline  double getMonthlyBonus() const { return monthlyBonus; };
	inline int getReqTrainingHrs() const { return reqTrainingHrs; };
	inline int getAttendedTrainingHrs() const { return attendedTrainingHrs; };
	void setMonthlyBonus(double mb);
	void setReqTrainingHrs(int reqHrs);
	void setAttendedTrainingHrs(int attHrs);
	void printTeamLeader();
private:
	double monthlyBonus;
	int reqTrainingHrs;
	int attendedTrainingHrs;
};

