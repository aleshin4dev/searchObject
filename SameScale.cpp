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
	image = imread("/home/aleshin8sergey/Workspace/Coursework/My_Alg/47.jpg", IMREAD_GRAYSCALE).clone();
	vector<int> compression_params;
	compression_params.push_back(IMWRITE_PNG_COMPRESSION);
	compression_params.push_back(9);
	resize(image, image, Size(92, 112));
	imwrite("/home/aleshin8sergey/Workspace/Coursework/My_Alg/testimageR.png", image, compression_params);
}
