#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main(){
	ifstream fin("file.in",ios::in);
	if(!fin){
		cerr<<"Failed opening"<<endl;}
	
	int count,weight,sum=0;
	fin>>count;
	int array[count];
	for(int i=0;i<count;i++){
		fin>>weight;
		array[i]=weight;}
	vector<int>w(count);
	for(int i=0;i<count;i++){
		w.at(i)=array[i];}
	sort(w.begin(),w.end());
	for(int i=3;i<count;i++){
		sum=sum+w.at(i);}
	cout<<sum<<endl;
}
