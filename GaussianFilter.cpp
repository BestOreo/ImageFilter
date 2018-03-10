//#include <opencv2/opencv.hpp>
//#include <math.h>
//using namespace cv;
//
//Mat GetGaussianKernel(const double sigma) {
//	const double PI = acos(double(-1));
//	// initialization
//	//for (int i = 0; i<size; i++)
//	//{
//	//	gaus[i] = new double[size];  //动态生成矩阵  
//	//}
//	int newsize = 2 * 5 * sigma + 1;
//
//	Mat gaus = Mat(newsize, newsize, CV_64FC1);
//
//	int center = newsize / 2;
//	double sum = 0;
//
//	for (int i = 0; i < newsize; i++) {
//		for (int j = 0; j < newsize; j++) {
//			gaus.at<double>(i,j) = (1 / (2 * PI*sigma*sigma))*exp(-((i - center)*(i - center) + (j - center)*(j - center)) / (2 * sigma*sigma));
//			sum += gaus.at<double>(i, j);
//		}
//	}
//
//	// 并未完整的二元正态分布，所以还需要归一化
//	for (int i = 0; i < newsize; i++) {
//		for (int j = 0; j < newsize; j++) {
//			gaus.at<double>(i, j) /= sum;
//		}
//	}
//
//	return gaus;
//}
//
//int main(int argc, char* argv[]) {
//	if(argc != 4)
//	{
//		std::cout << "GaussianFilter <input-image> <output-image> <sigma>" << std::endl;
//	}
//	String inname = argv[1];
//	String outname = argv[2];
//	double sigma = atof(argv[3]);
//	
//	Mat image = imread(inname);
//	Mat outimage = imread(inname);
//	
//	// 手写高斯核 Gausskernel
//	Mat gaus = GetGaussianKernel(sigma);
//	filter2D(image,outimage,image.depth(),gaus);
//
//	//namedWindow("hello"); // 创建一个标题为 "hello" 的窗口
//	imshow("in", image); // 在窗口 "hello" 中显示图片
//	imshow("out", outimage); // 在窗口 "hello" 中显示图片
//	imwrite(outname, outimage);
//
//	waitKey(0); // 等待用户按下键盘
//	destroyWindow("in"); // 销毁窗口 "hello"
//	destroyWindow("out"); // 销毁窗口 "hello"
//
//	return 0;
//}