#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	START:
		cout << n <<"\t";
		if(n==1){
			goto END;}
		else if(n%2==1){
			n=n*3+1;}
		else{
			n=n/2;}
		goto START;
	END:
		cout <<"\n";
		return 0;
}	
