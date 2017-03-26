#include "stdio.h"
#include "iostream"
#include "fstream"
#include <sstream>

#include <string>
#include "cstring"
#include <vector>

#include "opencv/cv.hpp"
#include "opencv/highgui.h"

using namespace std;
using namespace cv;

void integralImg(int numPic){
	Mat pic;
	double **M;
	M = new double*[113];
	for(int i = 0; i < 113; i++) M[i] = new double[93];

		for(int q = 0; q < 93; q++) M[0][q] = 0;
		for(int q = 0; q < 113; q++) M[q][0] = 0;

		ostringstream anOut;
		anOut << "/home/aleshin8sergey/Workspace/Coursework/My_Alg/imagesSS/" << numPic << ".png";
		pic = imread(anOut.str());

		for(int i = 1; i < 113; i++)
			for(int j = 1; j < 93; j++)
				M[i][j] = (double)pic.at<uchar>(i - 1, j - 1) / 255.0;

		for(int i = 112; i > 0; i--)
		   for(int j = 92; j > 0; j--)
		      for(int k = 112; k >= 0; k--)
		         for(int l = 92; l >= 0; l--)
		            if(((k <= i) && (l < j)) || ((k < i) && (l <= j)))
		            	M[i][j] += M[k][l];

		ostringstream anOut1;
		anOut1 << "/home/aleshin8sergey/Workspace/Coursework/My_Alg_v1.1/IImg/" << numPic << ".txt";
		ofstream file(anOut1.str().c_str());
		for(int i = 0; i < 113; i++){
			for(int j = 0; j < 93; j++) file << M[i][j] << " ";
			file << "\n";
		}
		file.close();
}
