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

void integralImg(){
	Mat pic;
	int **M;
	M = new int*[113];
	for(int i = 0; i < 113; i++) M[i] = new int[93];

		for(int q = 0; q < 93; q++) M[0][q] = 0;
		for(int q = 0; q < 113; q++) M[q][0] = 0;

		pic = imread("/home/aleshin8sergey/Workspace/Coursework/My_Alg/testimageR.png");

		for(int i = 1; i < 113; i++)
			for(int j = 1; j < 93; j++)
				M[i][j] = (int)pic.at<uchar>(i - 1, j - 1);

		for(int i = 112; i > 0; i--)
		   for(int j = 92; j > 0; j--)
		      for(int k = 112; k >= 0; k--)
		         for(int l = 92; l >= 0; l--)
		            if(((k <= i) && (l < j)) || ((k < i) && (l <= j)))
		            	M[i][j] += M[k][l];

		
		ofstream file("/home/aleshin8sergey/Workspace/Coursework/My_Alg/IntImg.txt");
		for(int i = 0; i < 113; i++){
			for(int j = 0; j < 93; j++) file << M[i][j] << " ";
			file << "\n";
		}
		file.close();
}
