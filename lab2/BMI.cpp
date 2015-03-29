#include<string>
#include"BMI.h"
BMI::BMI(){
	height=0,weight=0,value=0;
	d;
	bh=0,bw=0;
}
void BMI::setStart(float bh,float bw){
	height=bh;
	weight=bw;
}
float BMI::getStart(){
	return height,weight;
}
float BMI::getBMI(){//計算BMI值
	return value = weight*100*100/height/height;
}
string BMI::cate(float value){//印出字串
	if(value<15){
		d ="Very severely underweight";
		return d;}
	else if(value>=15&&value<16){
		d="Severely underweight";
		return d;}
	else if(value>=16&&value<18.5){
		d="Underweight";
		return d;}
	else if(value>=18.5&&value<25){
		d="Normal";
		return d;}
	else if(value>=25&&value<30){
		d="Overweight";
		return d;}
	else if(value>=30&&value<35){
		d="Obese Class I (Moderately obese)";
		return d;}
	else if(value>=35&&value<40){
		d="Obese Class II (Severely obese)";
		return d;}
	else if(value>=40){
		d="Obese Class III (Very severely obese)";
		return d;}
}
