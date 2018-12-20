#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	char ch;
	int i;
	double d;
	string str1;
	string str2;
	ifstream is("fdata.txt",ios::in);
	//is >>ch>>i>>d>>str1>>str2;
	if (!is){
		cout<<"file not found";
	}
	if (!is.eof){
		is>>ch;
		cout<<ch;
	}


	//cout<<ch<<endl<<i<<endl<<d<<endl<<str1<<endl<<str2<<endl;
	return 0;
}

