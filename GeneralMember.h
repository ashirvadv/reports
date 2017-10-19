#include <string>
#include <vector>

using namespace std;

string functionList[] = {"oGV", "oGT", "iGT", "TM", "Finance"};
int num_FM[] = {1, 1, 1, 1, 1};
int num_GMM = 1;

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
