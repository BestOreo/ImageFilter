//#include <opencv2/opencv.hpp>
//#include <math.h>
//using namespace cv;
//
//int main(int argc, char* argv[]) {
//	if (argc != 5) {
//		std::cout << "BoxFilter <input-image> <output-image> <w> <h>" << std::endl;
//	}
//	String inname = argv[1];
//	String outname = argv[2];
//	int w = atoi(argv[3]);
//	int h = atoi(argv[4]);
//
//	Mat image = imread(inname); 
//	Mat outimage = imread(inname);
//		
//	// ��ֵ�˲�
//	// get kern for filter
//	Mat kern(2 * w + 1, 2 * h + 1, CV_64FC1);
//	for (int i = 0; i < 2 * h + 1; i++) {
//		for (int j = 0; j < 2 * w + 1; j++) {
//			kern.at<double>(i, j) = 1.0 / ((2 * w + 1)*(2 * h + 1));
//		}
//	}
//
//	filter2D(image, outimage,image.depth(),kern);
//
//	//namedWindow("hello"); // ����һ������Ϊ "hello" �Ĵ���
//	imshow("in", image); // �ڴ��� "hello" ����ʾͼƬ
//	imshow("out", outimage); // �ڴ��� "hello" ����ʾͼƬ
//	imwrite(outname, outimage);
//		
//	waitKey(0); // �ȴ��û����¼���
//	destroyWindow("in"); // ���ٴ��� "hello"
//	destroyWindow("out"); // ���ٴ��� "hello"
//	return 0;
//
//}