#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char c, fname[10];
	ofstream out;
	cout<<"enter the file name"<<endl;
	cin>>fname;
	out.open(fname);
	cout<<"enter contents to save to the file (enter # at  the end)"<<endl;
	while((c=getchar())!='#'){
		out<<c;
	}
	out.close();
	ifstream fin;
	fin.open("demo.txt");
	cout<<"reading from the file"<<endl;
	while(fin){
		fin.get(c);
		cout<<c;
	}
	fin.close();
	return 0;
}

