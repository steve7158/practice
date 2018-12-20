#include <iostream>
using namespace std;
class A{
	private:
		int real,img;
	public:
		A(){
			real=7;
			img=3;
		}
		void show(){
			cout<<real<<"+i"<<img;
		}
		A operator + (A a1;A a2){
			A temp;
			temp.real=a1.real+a2.real;
			temp.img=a1.img+a2.img;
		}
};


int main(){
	A a;
	A b;
	A c;
	c=a+b;
	c.show();
}
