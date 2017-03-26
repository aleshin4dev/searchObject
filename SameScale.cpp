#include "iostream"
#include "opencv/cv.hpp"
#include "opencv/highgui.h"

#include <sstream>
#include <string>
#include <vector>

using namespace cv;
using namespace std;

void AlsameScale() {
	Mat image;
	int numPic = 48;

for (int uu = 0; uu < numPic; uu++) {
	ostringstream anOutS;
	anOutS << "/home/aleshin8sergey/Workspace/Coursework/My_Alg/images/" << uu << ".jpg";
	image = imread(anOutS.str(), IMREAD_GRAYSCALE).clone();
	vector<int> compression_params;
	compression_params.push_back(IMWRITE_PNG_COMPRESSION);
	compression_params.push_back(9);
	resize(image, image, Size(92, 112));
	ostringstream anOutS1;
	anOutS1 << "/home/aleshin8sergey/Workspace/Coursework/My_Alg/imagesSS/" << uu << ".png";
	imwrite(anOutS1.str(), image, compression_params);
}
}
