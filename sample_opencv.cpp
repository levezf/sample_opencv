
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;

int main(int argc, char** argv )
{
    Mat image;
    image = imread( "lena.jpg", IMREAD_GRAYSCALE );
    namedWindow("Display Image", WINDOW_NORMAL );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
