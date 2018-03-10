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
//	// 均值滤波
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
//	//namedWindow("hello"); // 创建一个标题为 "hello" 的窗口
//	imshow("in", image); // 在窗口 "hello" 中显示图片
//	imshow("out", outimage); // 在窗口 "hello" 中显示图片
//	imwrite(outname, outimage);
//		
//	waitKey(0); // 等待用户按下键盘
//	destroyWindow("in"); // 销毁窗口 "hello"
//	destroyWindow("out"); // 销毁窗口 "hello"
//	return 0;
//
//}