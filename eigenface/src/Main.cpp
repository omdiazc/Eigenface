#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char** argv) {
	//second commit
	Mat inputImage = imread("/home/miguel/test.png");
	imshow("Input Image", inputImage);
	
	int a = 3;
	waitKey(0);
	return 0;
}
