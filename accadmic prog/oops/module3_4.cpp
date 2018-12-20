#include <iostream>
using namespace std;

class A{
	public :
		virtual void print(){
			cout<<"base class A is printed"<<endl;
		}
		void show(){
			cout<<"show of base class A in printed "<<endl;
		}
};
class B:public A{
	public:
		void print(){
			cout<<"derived class B is printed"<<endl;
		}
		void show(){
			cout<<"show class of derived class B is printed"<<endl;
		}

};

int main(){
	A *a;
	B b;
	a=&b;
	b.print();
	b.show();
	cout<<"this pointer: "<<endl;
	a->print();
	a->show();
}



