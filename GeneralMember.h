#include <string>
#include <vector>

string functionList[] = {"oGV", "oGT", "iGT", "TM", "Finance"};
int num_FM[] = {0, 0, 0, 0, 0};

class GeneralMember
{
private:
	string name;
	int functionID;
	int GMM;
	int FM;

public:
	GeneralMember() { } //Default Constructor

	double gmm_attendance_rate();

	double fm_attendance_rate();

	double aiesec_activity();

	virtual bool performance_increasing();

	virtual bool performance_decreasing();

	virtual double performance_score();

};