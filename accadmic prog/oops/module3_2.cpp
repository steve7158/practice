#include <iostream>
using namespace std;

class A{
	int real,img;
public:
	A(int r=0, int i=0){
		real=r;
		img=i;
		}
	void show(){
		cout<<real<<"+i"<<img;
		}
	A operator + (A a1, A a2){
		A temp;
		temp.real=a1.real+a2.real;
		temp.img=a1.img+a2.img;
		return temp;
		}	


int main(){
	A a1(23,2);
	A a2(12,4);
	A c;
	c=a1+a2;
	c.show();
	return 0;
}
