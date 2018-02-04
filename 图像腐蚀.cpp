#include<stdafx.h>
#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	Mat img = imread("2.jpg");
	imshow("picture", img);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstimg;
	erode(img, dstimg, element);
	imshow("change", dstimg);
	waitKey(0);
}