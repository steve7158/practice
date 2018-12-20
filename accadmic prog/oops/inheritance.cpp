#include<iostream>
using namespace std;

class A{
protected:
	int x;
public:
	A(){
		x=7;
	}
//	void show(){
//		cout<<a;
//	}
};
class B{
protected:
	int x;
public:
	B(){
		x=8;
	}
//	void show(){
//		cout<<b;
//	}

};
class C:public A, public B{
	private:
		int c;
	public:
		void show (){
			cout<<" x of A"<<A::x;
			cout<<"x of B"<<B::x;
		}
};
int main(){
	A a;
	B b;
	C c;
	c.show();
}
	
			



