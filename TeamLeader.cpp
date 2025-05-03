#include "TeamLeader.h"
TeamLeader::TeamLeader(std::string name, int employeeNum, std::tuple<int, int, int> hireDate, int shift, double hourlyPay, double monthlyBonus, int reqTrainingHrs, int attendedTrainingHrs) 
	: ProductionWorker(name,  employeeNum,  hireDate,  shift,  hourlyPay) {
	setReqTrainingHrs(reqTrainingHrs);
	setAttendedTrainingHrs(attendedTrainingHrs);
	setMonthlyBonus(monthlyBonus);

}
void TeamLeader::setMonthlyBonus(double mb) {
	monthlyBonus = mb;
}
void TeamLeader::setReqTrainingHrs(int reqHrs) {
	reqTrainingHrs = reqHrs;
}
void TeamLeader::setAttendedTrainingHrs(int attHrs) {
	attendedTrainingHrs = attHrs;
}
void TeamLeader::printTeamLeader() {
	printProductionWorker();
	std::cout << "\nMonthly Bonus: " << monthlyBonus << "\nRequired Training Hours: " << reqTrainingHrs
		<< "\nAttended Training Hours: " << attendedTrainingHrs;

}