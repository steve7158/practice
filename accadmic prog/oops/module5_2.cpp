#include <fstream>
#include <iostream>
using namespace std;

const int max=100;

int buff[max];
int main(){
	int j;
	for (j=0;j<max;j++){
		buff[j]=j;
	}

	ofstream os("edata.dat",ios::in);
	os.write(reinterpret_cast<char*>(buff), max*sizeof(int));
	os.close();
	for(j=0;j<max;j++){
		buff[j]=0;
	}
	ifstream is("edata.dat", ios::binary);
	is.read(reinterpret_cast<char*>(buff), max*sizeof(int));
	for (j=0;j<max;j++){
		cout<<"data is correct"<<endl;
		}
	return 0;






