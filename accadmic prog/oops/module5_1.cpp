#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
	char ch='x';
	int j=77;
	double d=6.02;
	string str1="Kaflka";
	string str2="Proust";
	ofstream outfile("fdata.txt");
	outfile<<ch<<" "<<j<<" "<<d<<" "<<str1<<" "<<str2;
	cout<<"file writen";
	return 0;
}
