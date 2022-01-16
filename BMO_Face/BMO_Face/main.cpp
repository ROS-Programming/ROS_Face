#include <iostream>
#include <opencv2/opencv.hpp>
#include <algorithm>

using namespace cv;
using namespace std;

int main()
{
	Mat img_color;
	int val = 1;
	img_color = imread("C:\\Users\\doso5\\Desktop\\BMO Faces\\" + to_string(val) +".jpg", IMREAD_COLOR);
	if (img_color.empty()) return -1;
	namedWindow("BMO");
	imshow("BMO", img_color);
	
	while (1)
	{
		int key = waitKey(1);
		if (key == 27) break;
		else if (key == 'a') 
		{
			if (val <= 1) continue;
			else
			{
				val -= 1;
				img_color = imread("C:\\Users\\doso5\\Desktop\\BMO Faces\\" + to_string(val) + ".jpg", IMREAD_COLOR);
				if (img_color.empty()) return -1;
				namedWindow("BMO");
				imshow("BMO", img_color);
			}
		}
		else if (key == 'd')
		{
			if (val >= 9) continue;
			else
			{
				val += 1;
				img_color = imread("C:\\Users\\doso5\\Desktop\\BMO Faces\\" + to_string(val) + ".jpg", IMREAD_COLOR);
				if (img_color.empty()) return -1;
				namedWindow("BMO");
				imshow("BMO", img_color);
			}
		}
	}
	
	destroyAllWindows();
	return 0;
}