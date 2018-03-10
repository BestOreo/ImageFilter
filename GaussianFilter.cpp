//#include <opencv2/opencv.hpp>
//#include <math.h>
//using namespace cv;
//
//Mat GetGaussianKernel(const double sigma) {
//	const double PI = acos(double(-1));
//	// initialization
//	//for (int i = 0; i<size; i++)
//	//{
//	//	gaus[i] = new double[size];  //��̬���ɾ���  
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
//	// ��δ�����Ķ�Ԫ��̬�ֲ������Ի���Ҫ��һ��
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
//	// ��д��˹�� Gausskernel
//	Mat gaus = GetGaussianKernel(sigma);
//	filter2D(image,outimage,image.depth(),gaus);
//
//	//namedWindow("hello"); // ����һ������Ϊ "hello" �Ĵ���
//	imshow("in", image); // �ڴ��� "hello" ����ʾͼƬ
//	imshow("out", outimage); // �ڴ��� "hello" ����ʾͼƬ
//	imwrite(outname, outimage);
//
//	waitKey(0); // �ȴ��û����¼���
//	destroyWindow("in"); // ���ٴ��� "hello"
//	destroyWindow("out"); // ���ٴ��� "hello"
//
//	return 0;
//}