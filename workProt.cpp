#include "iostream"
#include "string"
#include "fstream"
#include "vector"
#include "math.h"

#include "SameScale.h"
#include "IntImg.h"
#include "haar.h"

using namespace std;

int main(){
fstream fileItog("/home/aleshin8sergey/Workspace/Coursework/My_Alg/ITOG.txt");
	AlsameScale();
for(int ii = 0; ii < 48; ii++)
	integralImg(ii);

	const double EPS = 1e-7;
for(int ii = 0; ii < 48; ii++){
	vector<double> funcH_and_alfa = vector<double>();

	vector<int> voteH = vector<int>();
	double tmp, ALFA = 0, pAandH = 0;

	fstream ha("/home/aleshin8sergey/Workspace/Coursework/My_Alg/alfa.txt");
	for(int i = 0; i < 200000; i++){
		ha >> tmp;
		funcH_and_alfa.push_back(tmp);
	}
	ha.close();

	voteH = haarFunc(ii, 112, 92);
	for(int i = 0; i < 199999; i+=2){
		ALFA += funcH_and_alfa.at(i + 1);
		pAandH += (funcH_and_alfa.at(i + 1) * voteH.at(funcH_and_alfa.at(i)));
	}

	if (0.5 * ALFA - pAandH < EPS)
		fileItog << ii << " " << 1 << "\n";
	else
		fileItog << ii << " " << 0 << "\n";
}
	return 0;
}
