#include <string>
#include "a.h"
using namespace std;

BMI::BMI(){
	_height = 170;
	_weight = 60;
}

BMI::BMI(int height, int weight){
	_height = height;
	_weight = weight;
}

void BMI::set_height(int height){
	_height = height;
}

void BMI::set_weight(int weight){
	_weight = weight;
}

int BMI::get_height(){
	return _height;
}

int BMI::get_weight(){
	return _weight;
}

double BMI::return_BMI(){
	return _weight*1.0/(_height*_height/10000.0);
}

string BMI::return_status(){
	double BMI = this->return_BMI();
	if (BMI<15)
		return "Very severely underweight";
	else if (BMI>=15 && BMI<16)
		return "Severely underweight";
	else if (BMI>=16 && BMI<18.5)
		return "Underweight";
	else if (BMI >=18.5 && BMI<25)
		return "Normal";
	else if (BMI >=25 && BMI<30)
		return "Overweight";
	else if (BMI >=30 && BMI<35)
		return "Obese Class1";
	else if (BMI>=35 && BMI<40)
		return "Obese Class2";
	else
		return "Obese Class3";
}
