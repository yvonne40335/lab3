#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
class BMI{
	public:
		BMI();
		void setStart(float bh,float bw);
		float getStart();
		float getBMI();
		string cate(float value);
	private:
		float height, weight, value, bh, bw;
		string d;
};
