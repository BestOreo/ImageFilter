//#include <opencv2/opencv.hpp>
//#include <math.h>
//using namespace cv;
//#define Pi 3.1415926
//
//
//double Gaussian(double sigma, double x)
//{
//	return exp(-pow(x, 2) / (2 * pow(sigma, 2))) / (sigma*pow(2 * Pi, 0.5));
//}
//
//double getDistance(int x1, int y1, int x2, int y2) {
//	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
//Vec3b getPix(Mat image, int y, int x) {
//	int ny = (y + image.rows) % image.rows;
//	int nx = (x + image.cols) % image.cols;
//	return image.at<Vec3b>(ny, nx);
//}
//
//double GetWp(Mat image, int y, int x, double sigma1, double sigma2, int window, int k) {
//
//	double wp = 0;
//	int w = window / 2;
//
//	for (int pi = y - w; pi < y + w + 1; pi++) {
//		for (int pj = x - w; pj < x + w + 1; pj++) {
//			double distance = getDistance(x, y, pj, pi);
//			double lightdiff = abs(getPix(image, y, x)[k] - getPix(image, pi, pj)[k]);
//			wp += Gaussian(sigma1, distance)*Gaussian(sigma2, lightdiff);
//		}
//	}
//
//	return wp;
//}
//
//double GetWpI(Mat image, int y, int x, double sigma1, double sigma2, int window, int k) {
//
//	double wp = 0;
//	int w = window / 2;
//
//	for (int pi = y - w; pi < y + w + 1; pi++) {
//		for (int pj = x - w; pj < x + w + 1; pj++) {
//			double distance = getDistance(x, y, pj, pi);
//			double lightdiff = abs(getPix(image, y, x)[k] - getPix(image, pi, pj)[k]);
//			wp += Gaussian(sigma1, distance)*Gaussian(sigma2, lightdiff)*getPix(image, pi, pj)[k];
//		}
//	}
//
//	return wp;
//}
//
//
//
//int main(int argc, char* argv[]) {
//
//	if (argc != 5) {
//		std::cout << "BilateralFilter <input-image> <output-image> <sigma-s> <sigma-r>" << std::endl;
//		return 1;
//	}
//
//	// 双边滤波
//
//	/*Mat image = imread("Emma-in.png");
//	Mat outimage = imread("Emma-in.png");*/
//
//	String inname = argv[1];
//	String outname = argv[2];
//	Mat image = imread(inname);
//	Mat outimage = imread(outname); 
//
//	int const window = 3;
//	const int width = image.cols;
//	const int height = image.rows;
//	double sigma1 = 20;
//	double sigma2 = 3;
//
//	//cv::bilateralFilter(image, outimage, image.depth(), 20, 24);
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++) {
//
//
//			for (int k = 0; k < 3; k++) {
//				double wp = GetWp(image, i, j, sigma1, sigma2, window, k);
//				double sum = GetWpI(image, i, j, sigma1, sigma2, window, k);
//				outimage.at<Vec3b>(i, j)[k] = sum / wp;
//			}
//
//		}
//	}
//
//	imwrite(outname, outimage);
//	imshow("in", image); // 在窗口 "hello" 中显示图片
//	imshow("out", outimage); // 在窗口 "hello" 中显示图片
//
//
//	waitKey(0); // 等待用户按下键盘
//	destroyWindow("in"); // 销毁窗口 "hello"
//	destroyWindow("out"); // 销毁窗口 "hello"
//	return 0;
//}