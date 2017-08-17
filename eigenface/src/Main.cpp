#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char** argv) {
	//second commit
	Mat inputImage = imread("/home/miguel/test2.png");
	imshow("Input Image", inputImage);
	
	waitKey(0);
	return 0;
}
