#include <QCoreApplication>
#include <opencv2/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

int main(int argc, char *argv[])
{
    cv::Mat image;
    cv::VideoCapture capture;
    capture.open(0);
    if(capture.isOpened()){
        while(true){
            capture >> image;
            cv::imshow("test", image);
            int c = cv::waitKey(10);//en ms, donc fps max -> 100
            if(c == 27) break; //touche echap
        }
    }

    return 0;
}
