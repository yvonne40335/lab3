#include<iostream>
#include<cstdlib>
#include<string>
#include<unistd.h>
#include<fstream>
#include<iomanip>
#include"BMI.h"
using namespace std;

int main(){
	ifstream fin("file.in",ios::in);//開要讀取資料的檔
	ofstream fout("file.out",ios::out);//開要寫入資料的檔
	BMI bmi;
	float bh,bw;
	float la;
	if(!fin||!fout)//如果開檔失敗會印出訊息
		cerr<<"file cannot open"<<endl;
	while(!fin.eof()){//讀到檔案結尾則結束
	fin>>bh>>bw;//把讀到的資料存到bh,bw裡
	if(bh==0||bw==0)//如果為0則停止,不然會造成執行錯誤
		break;
	bmi.setStart(bh,bw);
	bmi.getStart();
	la=bmi.getBMI();
	bmi.cate(la);
	fout<<fixed<<setprecision(2)<<bmi.getBMI()<<"\t"<<bmi.cate(la)<<endl;//在file.out裡印出資訊
	}	
	fin.close();
	fout.close();
}
