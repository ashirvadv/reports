#include <string>
#include <vector>
#include "GeneralMember.h"

using namespace std;

double GeneralMember::gmm_attendance_rate() {
    return GMM / num_GMM;
}

double GeneralMember::fm_attendance_rate() {
    return FM / num_FM[functionID];
}
