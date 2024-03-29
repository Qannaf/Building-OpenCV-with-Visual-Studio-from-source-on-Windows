#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = Mat::zeros(300, 600, CV_8UC3);
	circle(image, Point(250, 150), 100, Scalar(0, 255, 128), -100);
	circle(image, Point(350, 150), 100, Scalar(255, 255, 255), -100);
	imshow("Display Window", image);
	waitKey(0);

	cv::Mat ret;
	cv::hconcat(image, image, ret);
	//hconcat(ret, img_result_gpu, ret);


	cv::namedWindow("result", cv::WINDOW_AUTOSIZE);
	imshow("result", ret);
	waitKey(0);

	return 0;
}