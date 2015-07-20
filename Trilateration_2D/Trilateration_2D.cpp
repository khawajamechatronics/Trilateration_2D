#include <opencv\highgui.h>
#include <opencv\cv.h>

int main()
{
	//IplImage* bckgrd = cvCreateImage(cvSize(500, 500), IPL_DEPTH_8U, 3);
	//cvSetZero(bckgrd);
	
	IplImage* bckgrd = cvLoadImage("bckgrd.jpg", CV_LOAD_IMAGE_UNCHANGED);
	


	cvShowImage("bck", bckgrd);
	cvWaitKey(0);
	cvReleaseImage(&bckgrd);

	return 0;
}